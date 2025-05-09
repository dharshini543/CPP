#include "Calender.h"
#include <iostream>
#include <conio.h>
#include"Debug.h"

#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define ENTER_KEY 13

Calender::Calender()
{
    if(Debug::getEnabled())
        cout<<"Calender Constructor"<<endl;

    time_t now = time(0);
    tm* localTime = localtime(&now);
    m_currentYear = localTime->tm_year + 1900;
    m_currentMonth = localTime->tm_mon + 1;
}

Calender::~Calender()
{
    if(Debug::getEnabled())
        cout<<"Calender Destructor"<<endl;

    for (auto year : m_years)
    {
        delete year;
    }
}

Year* Calender::getYear(int year)
{
    for (auto y : m_years)
    {
        if (y->getYear() == year)
        {
            return y;
        }
    }
    return nullptr;
}

void Calender::setBookingManager(AuditoriumBookingManager* bookingManager)
{
    m_bookingManager = bookingManager;
}

void Calender::addYear(int year)
{
    Year* newYear = new Year(year);
    m_years.push_back(newYear);
}


void Calender::printMonthCalender()
{
    Year* year = getYear(m_currentYear);
    if (!year)
    {
        addYear(m_currentYear);
        year = getYear(m_currentYear);
    }
    Month* month = year->getMonth(m_currentMonth);
    if (!month)
    {
        year->addMonth(m_currentMonth);
        month = year->getMonth(m_currentMonth);
    }
    month->print(m_currentYear, m_bookingManager);

}
void Calender::printSpecificMonth(int year, int month)
{
    Year* y = getYear(year);
    if (!y)
    {
        addYear(year);
        y = getYear(year);
    }
    Month* m = y->getMonth(month);
    if (!m)
    {
        y->addMonth(month);
        m = y->getMonth(month);
    }
    m->print(year, m_bookingManager);
}

void Calender::navigate()
{
    char input;
    do {
        system("cls");
        printMonthCalender();
        cout<<endl;
        this->printTodayDate();

        cout << "Enter < for previous month, > for next month, Enter to Continue Booking";
        input = _getch();

        if (input == LEFT_ARROW)
        {
            if (--m_currentMonth < 1)
            {
                m_currentMonth = 12;
                --m_currentYear;
            }
        }
        else if (input == RIGHT_ARROW)
        {
            if (++m_currentMonth > 12)
            {
                m_currentMonth = 1;
                ++m_currentYear;
            }
        }

    } while (input != ENTER_KEY);
}

void Calender::printTodayDate()
{
    time_t t;
    struct tm* today;

    time(&t);
    today = localtime(&t);

    cout<<"Today's Date : "<<today->tm_mday<<"/0"<<today->tm_mon + 1<<"/"<<today->tm_year + 1900<<endl<<endl;
}

AuditoriumBookingManager *Calender::bookingManager() const
{
    return m_bookingManager;
}

