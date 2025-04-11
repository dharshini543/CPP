#include "Owner.h"
#include "Driver.h"
#include<iostream>
using namespace  std;

Owner::Owner(string name)
{
    cout<<"Owner Constructor"<<endl;
    m_ownerName = name;
}

Owner::~Owner()
{
    cout<<"Owner Destructor"<<endl;
    delete m_car;
}

void Owner::assignDriver(Driver *driver)
{
    if(driver != NULL)
    {
        cout<<driver->getName()<<" is assigned to Owner"<<endl;
        m_car->assignDriver(driver);
    }
}

string Owner::getName()
{
    return m_ownerName;
}
