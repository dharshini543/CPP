#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle()
{
    cout<<"Vehicle constructor called"<<endl;
}

Vehicle::~Vehicle()
{
    cout<<"vehicle destructor called"<<endl;
}

void Vehicle::fuelfun(string fuel)
{
    cout<<" Base class Vehicle function called"<<endl;
}
