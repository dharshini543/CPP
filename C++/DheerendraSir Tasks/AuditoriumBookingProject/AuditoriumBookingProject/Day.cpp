#include "Day.h"
#include <iostream>

Day::Day(int day)
{
    //cout<<"Day Constructur"<<endl;
    m_day = day;
}

Day::~Day()
{
    //cout<<"Day Destructur"<<endl;
}

int Day::getDay()
{
    return m_day;
}
