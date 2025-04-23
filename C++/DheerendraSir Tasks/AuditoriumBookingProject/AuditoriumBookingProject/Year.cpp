#include "Year.h"
#include<iostream>

Year::Year(int year)
{
    //cout<<"Year Constructor"<<endl;
    m_year = year;
}

Year::~Year()
{
    cout<<"Year Destructor"<<endl;
    for (auto month : m_months)
    {
        delete month;
    }
}

int Year::getYear()
{
    return m_year;
}

Month* Year::getOrCreateMonth(int month)
{
    for (auto m : m_months)
    {
        if (m->getMonth() == month)
        {
            return m;
        }
    }
    Month* newMonth = new Month(month);
    m_months.push_back(newMonth);
    return newMonth;
}

