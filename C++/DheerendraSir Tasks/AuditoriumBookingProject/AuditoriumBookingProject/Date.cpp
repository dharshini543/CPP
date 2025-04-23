#include "Date.h"
#include<iostream>
#include <string>
#include <sstream>
using namespace std;

Date::Date()
{
    cout<<"Date Constructor"<<endl;
}

Date::Date(int day, int month, int year)
{
    //cout<<"Date Parameterized Constructor"<<endl;
    m_day = day;
    m_month = month;
    m_year = year;
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

Date Date::getCurrentDate()
{
    time_t now = time(0);
    tm* localTime = localtime(&now);
    return Date(localTime->tm_mday, localTime->tm_mon + 1, localTime->tm_year + 1900);
}

bool Date::operator < (const Date& other)const
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


istream & operator >> (istream& in, Date& date)
{
    string inputLine;

    while (true)
    {
        getline(in, inputLine);

        if (inputLine.empty()) continue;

        stringstream ss(inputLine);
        int day, month, year;
        char dash1, dash2;

        if (ss >> day >> dash1 >> month >> dash2 >> year &&
            dash1 == '-' && dash2 == '-' && ss.eof())
        {
            if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 1)
            {
                date.m_day = day;
                date.m_month = month;
                date.m_year = year;
                break;
            }
            else
            {
                cout << "Invalid values. Day must be b/w 1 to 31, month  b/w 1 to 12, and year positive.\n";
            }
        }
        else
        {
            cout << "Invalid format! Please enter date like DD-MM-YYYY\n";
        }
    }

    return in;
}
