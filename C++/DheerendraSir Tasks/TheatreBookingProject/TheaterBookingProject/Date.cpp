#include "Date.h"
#include<iostream>
using namespace std;

Date::Date()
{
    cout<<"Date Constructor"<<endl;
}
Date::~Date()
{
    cout<<"Date Destructor"<<endl;
}

int Date::getDay()
{
    return m_day;
}
int Date::getMonth()
{
    return m_month;
}
int Date::getYear()
{
    return m_year;
}

bool Date::operator<(const Date &other)const
{
    if (m_year != other.m_year)
    {
        return m_year < other.m_year;
    }
    if (m_month != other.m_month)
    {
        return m_month < other.m_month;
    }
    return m_day < other.m_day;
}

bool Date::operator==(const Date &other)
{
    return m_day == other.m_day && m_month == other.m_month && m_year == other.m_year;
}

bool Date::operator!=(const Date &other)
{
    return !(*this == other);
}

string Date::toString()
{
    return to_string(m_day) + to_string(m_month) + to_string(m_year);
}

istream & operator >>(istream& in, Date& date)
{
    in>>date.m_day>>date.m_month>>date.m_year;
    return in;
}

ostream & operator <<(ostream& out, Date date)
{
    out<<date.getDay()<<date.getMonth()<<date.getYear();
    return out;
}

