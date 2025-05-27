#include "year.h"
#include<iostream>
#include"debug.h"

Year::Year(int year)
{
    if(Debug::getEnabled())
        cout<<"Year Constructor"<<endl;
    m_year = year;
}

Year::~Year()
{
    if(Debug::getEnabled())
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

Month* Year::getMonth(int month)
{
    for (auto m : m_months)
    {
        if (m->getMonth() == month)
        {
            return m;
        }
    }
    return nullptr;
}


void Year::addMonth(int month)
{
    Month* newMonth = new Month(month);
    m_months.push_back(newMonth);
}
