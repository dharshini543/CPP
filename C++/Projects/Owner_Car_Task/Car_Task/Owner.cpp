#include "Owner.h"
#include "Driver.h"
#include<iostream>
using namespace  std;

Owner::Owner()
{
    cout<<"Owner Constructor"<<endl;
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
        cout<<"Driver is assigned to Owner"<<endl;
        m_car->assignDriver(driver);
    }
}
