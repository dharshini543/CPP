#include "Month.h"
#include <iostream>
#include <iomanip>

int getDaysInMonth(int month, int year)
{
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
    //cout<<"Month Constructor"<<endl;
    m_month = month;
}

Month::~Month()
{
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

Day* Month::getOrCreateDay(int day)
{
    for (auto d : m_days)
    {
        if (d->getDay() == day)
        {
            return d;
        }
    }

    Day* newDay = new Day(day);
    m_days.push_back(newDay);
    return newDay;
}

void Month::print(int year)
{
    string monthNames[] = {  "", "January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};

    int numDays = getDaysInMonth(m_month, year);
    int startDay = getWeekDay(year, m_month);

    cout << "\n          " << monthNames[m_month] << "  " << year << "\n";
    cout << "Su   Mo   Tu   We   Th   Fr   Sa\n";

    for (int i = 0; i < startDay; ++i)
        cout << "     ";
    for (int i = 1; i <= numDays; ++i)
    {
        this->getOrCreateDay(i);
        cout << setw(2) << i << "   ";
        if ((i + startDay) % 7 == 0)
        {
            cout << "\n";
        }
    }
    cout << "\n";

}
