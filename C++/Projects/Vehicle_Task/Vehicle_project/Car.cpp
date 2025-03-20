#include "Car.h"
#include<iostream>
using namespace std;

Car::Car()
{
    cout<<"Car Constructor"<<endl;
}

Car::Car(string carName, string carNumber, float carCost, string carStatus)
{
    cout<<"Car Constructor"<<endl;
    m_vehicleName = carName;
    m_vehicleNum = carNumber;
    m_vehicleStatus = carStatus;
    m_vehicleCost = carCost;
}

Car::~Car()
{
    cout<<"Car Destructor"<<endl;
}
string Car::getName()
{
    return m_vehicleName;
}

string Car::getStatus()
{
    return m_vehicleStatus;
}

float Car::getCost()
{
    return m_vehicleCost;
}

string Car::getVehicleNum()
{
    return m_vehicleNum;
}

void Car::setVehicleNum(string vehicleNum)
{
    m_vehicleNum = vehicleNum;
}

void Car::setName(string vehicleName)
{
    m_vehicleName = vehicleName;
}

void Car::setStatus(string vehicleStatus)
{
    m_vehicleStatus = vehicleStatus;
}

void Car::setCost(float vehicleCost)
{
    m_vehicleCost = vehicleCost;
}


