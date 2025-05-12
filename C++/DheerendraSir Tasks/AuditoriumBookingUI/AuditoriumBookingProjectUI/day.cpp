#include "day.h"
#include <iostream>
using namespace std;
#include"debug.h"

Day::Day(int day)
{
    if(Debug::getEnabled())
        cout<<"Day Constructur"<<endl;
    m_day = day;
}

Day::~Day()
{
    if(Debug::getEnabled())
        cout<<"Day Destructur"<<endl;
}

int Day::getDay()
{
    return m_day;
}
