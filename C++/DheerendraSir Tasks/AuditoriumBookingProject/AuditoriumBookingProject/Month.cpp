#include "Month.h"
#include <iostream>

Month::Month(int month)
{
    cout<<"Month Constructor"<<endl;
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

int Month::getMonth() const
{
    return m_month;
}

Day* Month::getOrCreateDay(int day)
{
    for (auto d : m_days)
    {
        if (d->getDay() == day)
            return d;
    }
    Day* newDay = new Day(day);
    m_days.push_back(newDay);
    return newDay;
}

