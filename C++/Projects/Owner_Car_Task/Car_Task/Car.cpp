#include "Car.h"
#include<iostream>
using namespace  std;

Car::Car()
{
    cout<<"Car Constructor"<<endl;
}

Car::~Car()
{
    cout<<"Car Destructor"<<endl;
}

void Car::assignDriver(Driver* driver)
{
    cout<<driver->getName()<<" is driving car"<<endl;
    m_driver = driver;
}

