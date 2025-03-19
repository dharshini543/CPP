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

