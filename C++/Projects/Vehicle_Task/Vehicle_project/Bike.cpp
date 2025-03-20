#include "Bike.h"
#include<iostream>
using namespace std;

Bike::Bike()
{
    cout<<"Bike Constructor"<<endl;
}

Bike::Bike(string bikeName, string bikeNumber, float bikeCost, string bikeStatus)
{
    m_vehicleName = bikeName;
    m_vehicleNum = bikeNumber;
    m_vehicleStatus = bikeStatus;
    m_vehicleCost = bikeCost;
}

Bike::~Bike()
{
    cout<<"Bike Destructor"<<endl;
}

string Bike::getName()
{
    return m_vehicleName;
}

string Bike::getStatus()
{
    return m_vehicleStatus;
}

float Bike::getCost()
{
    return m_vehicleCost;
}

string Bike::getVehicleNum()
{
    return m_vehicleNum;
}

void Bike::setVehicleNum(string vehicleNum)
{
    m_vehicleNum = vehicleNum;
}

void Bike::setName(string vehicleName)
{
    m_vehicleName = vehicleName;
}

void Bike::setStatus(string vehicleStatus)
{
    m_vehicleStatus = vehicleStatus;
}

void Bike::setCost(float vehicleCost)
{
    m_vehicleCost = vehicleCost;
}


