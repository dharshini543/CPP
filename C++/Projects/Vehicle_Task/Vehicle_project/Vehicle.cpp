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
    return m_vehicleName;
}

string Vehicle::getStatus()
{
    return m_vehicleStatus;
}

float Vehicle::getCost()
{
    return m_vehicleCost;
}

string Vehicle::getVehicleNum()
{
    return m_vehicleNum;
}

void Vehicle::setVehicleNum(string vehicleNum)
{
    m_vehicleNum = vehicleNum;
}

void Vehicle::setName(string vehicleName)
{
    m_vehicleName = vehicleName;
}

void Vehicle::setStatus(string vehicleStatus)
{
    m_vehicleStatus = vehicleStatus;
}

void Vehicle::setCost(float vehicleCost)
{
    m_vehicleCost = vehicleCost;
}


