#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
    cout<<"Vehicle Constructor"<<endl;
}

Vehicle::~Vehicle()
{
    cout<<"Vehicle Destructor"<<endl;
}

string Vehicle::getName()
{
    return m_name;
}

string Vehicle::getStatus()
{
    return m_status;
}

int Vehicle::getDuration()
{
    return m_duration;
}

float Vehicle::getCost()
{
    return m_cost;
}

void Vehicle::setStatus(string status)
{
    m_status = status;
}

void Vehicle::setCost(float cost)
{
    m_cost = cost;
}


