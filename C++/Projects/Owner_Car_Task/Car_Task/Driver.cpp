#include "Driver.h"
#include<iostream>
using namespace  std;

Driver::Driver(string name)
{
    cout<<"Driver Constructor"<<endl;
    m_driverName = name;
}

Driver::~Driver()
{
    cout<<"Driver Destructor"<<endl;
}

string Driver::getName()
{
    return m_driverName;
}

