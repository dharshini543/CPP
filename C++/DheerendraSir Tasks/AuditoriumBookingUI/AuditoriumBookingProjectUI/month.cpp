#include "month.h"
#include <iostream>
#include <iomanip>
#include"debug.h"

int getDaysInMonth(int month, int year)
{
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
        return 29;
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return daysInMonth[month - 1];
}

int getWeekDay(int year, int month)
{
    tm time_in = {};
    time_in.tm_year = year - 1900;
    time_in.tm_mon = month - 1;
    time_in.tm_mday = 1;
    mktime(&time_in);
    return time_in.tm_wday;
}

Month::Month(int month)
{
    if(Debug::getEnabled())
        cout<<"Month Constructor"<<endl;
    m_month = month;
}

Month::~Month()
{
    if(Debug::getEnabled())
        cout<<"Month Destructor"<<endl;
    for (auto day : m_days)
    {
        delete day;
    }
}

int Month::getMonth()
{
    return m_month;
}

Day* Month::getDay(int day)
{
    for (auto d : m_days)
    {
        if (d->getDay() == day)
        {
            return d;
        }
    }
    return nullptr;
}

void Month::addDay(int day)
{
    Day* newDay = new Day(day);
    m_days.push_back(newDay);
}

void Month::print(int year, AuditoriumBookingManager* manager)
{
    string monthNames[] = {  "", "January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};

    int numDays = getDaysInMonth(m_month, year);
    int startDay = getWeekDay(year, m_month);

    cout << "\n                      " << monthNames[m_month] << "    " << year << "\n";
    cout << "Su       Mo       Tu       We       Th       Fr       Sa\n";

    for (int i = 0; i < startDay; ++i)
        cout << "         ";
    for (int i = 1; i <= numDays; ++i)
    {
        Day* day =this->getDay(i);
        if (!day)
        {
            this->addDay(i);
        }

        Date d(i, m_month, year);
        int bookcount = manager->getBookingCount(d);
        int availableCount = manager->getAvailableCount(d);

        if(availableCount == 0)
        {
            cout<<setw(2)<<"         ";
            if ((i + startDay) % 7 == 0)
                cout << "\n";
            continue;
        }
        if(bookcount > 0)
        {
            cout << setw(2) << i << "/"<<bookcount<< "      ";
        }
        else
        {
            cout<<setw(2)<<i<<"       ";
        }
        if ((i + startDay) % 7 == 0)
            cout << "\n";

    }
    cout << "\n";

}

vector<Day *> Month::getDays()
{
    return m_days;
}
