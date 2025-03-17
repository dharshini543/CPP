#include "Bike.h"
#include<iostream>
using namespace std;

Bike::Bike()
{
    cout<<"Bike Constructor"<<endl;
}

Bike::Bike(string name, string number, string status, int duration, float cost)
{
    m_name = name;
    m_vehicleNum = number;
    m_status = status;
    m_duration = duration;
    m_cost = cost;
}

Bike::~Bike()
{
    cout<<"Bike Destructor"<<endl;
}

string Bike::getName()
{
    return m_name;
}

string Bike::getStatus()
{
    return m_status;
}

int Bike::getDuration()
{
    return m_duration;
}

float Bike::getCost()
{
    return m_cost;
}

string Bike::getVehicleNum()
{
    return m_vehicleNum;
}

void Bike::setVehicleNum(string vehicleNum)
{
    m_vehicleNum = vehicleNum;
}

void Bike::setName(string name)
{
    m_name = name;
}

void Bike::setStatus(string status)
{
    m_status = status;
}

void Bike::setCost(float cost)
{
    m_cost = cost;
}


