#include "Calender.h"
#include <iostream>
#include <conio.h>

//typedef "75" leftArrow
Calender::Calender()
{
    cout<<"Calender Constructor"<<endl;
    time_t now = time(0);
    tm* localTime = localtime(&now);
    m_currentYear = localTime->tm_year + 1900;
    m_currentMonth = localTime->tm_mon + 1;
}

Calender::~Calender()
{
    cout<<"Calender Destructor"<<endl;
    for (auto year : m_years)
    {
        delete year;
    }
}

Year* Calender::getOrCreateYear(int year)
{
    for (auto y : m_years)
    {
        if (y->getYear() == year)
        {
            return y;
        }
    }
    Year* newYear = new Year(year);
    m_years.push_back(newYear);
    return newYear;
}

void Calender::printMonthCalender()
{
    Year* y = getOrCreateYear(m_currentYear);
    Month* m = y->getOrCreateMonth(m_currentMonth);
    m->print(m_currentYear);
}

void Calender::navigate()
{
    char input;
    do {
        system("cls");
        printMonthCalender();
        cout<<endl;
        this->printTodayDate();

        cout << "Enter < for previous month, > for next month, Esc to exit: ";
        input = _getch();

        if (input == 75)
        {
            if (--m_currentMonth < 1)
            {
                m_currentMonth = 12;
                --m_currentYear;
            }
        }
        else if (input == 77)
        {
            if (++m_currentMonth > 12)
            {
                m_currentMonth = 1;
                ++m_currentYear;
            }
        }

    } while (input != 27);
}

void Calender::printTodayDate()
{
    time_t t;
    struct tm* today;

    time(&t);
    today = localtime(&t);

    cout<<"Today's Date : "<<today->tm_mday<<"/0"<<today->tm_mon + 1<<"/"<<today->tm_year + 1900<<endl<<endl;
}

