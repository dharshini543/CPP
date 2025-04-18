#include "Year.h"
#include <iostream>

Year::Year(int yearNum)
{
    cout<<"Year Constructor"<<endl;
    m_yearNum = yearNum;
    m_months.push_back(new Month("April"));
}
Year::~Year()
{
    cout<<"Year Destructor"<<endl;
}

