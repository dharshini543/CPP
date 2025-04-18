#include "Month.h"
#include <iostream>

Month::Month(string monthName)
{
    cout<<"Month Constructor"<<endl;
    m_monthName = monthName;
}

Month::~Month()
{
    cout<<"Month Destructor"<<endl;
}

