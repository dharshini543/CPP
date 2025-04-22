#include "Calender.h"
#include <iostream>
#include <conio.h>

Calender::Calender()
{
    currentYear = 2025;
    currentMonth = 4;
}

Calender::~Calender()
{
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
    Year* y = getOrCreateYear(currentYear);
    Month* m = y->getOrCreateMonth(currentMonth);
    m->print(currentYear);
}

void Calender::navigate()
{
    char input;
    do {
        printMonthCalender();

        cout << "Enter < for previous month, > for next month, q to quit: ";
        cin >> input;

        if (input == '<')
        {
            if (--currentMonth < 1)
            {
                currentMonth = 12;
                --currentYear;
            }
        }
        else if (input == '>')
        {
            if (++currentMonth > 12)
            {
                currentMonth = 1;
                ++currentYear;
            }
        }

    } while (input != 'q');
}

void Calender::printTodayDate()
{
    time_t t;
    struct tm* today;

    time(&t);
    today = localtime(&t);

    cout<<"Today's Date : "<<today->tm_mday<<"/0"<<today->tm_mon + 1<<"/"<<today->tm_year + 1900<<endl<<endl;
}

