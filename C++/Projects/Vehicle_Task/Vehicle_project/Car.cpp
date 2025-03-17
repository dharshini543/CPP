#include "Car.h"
#include<iostream>
using namespace std;

Car::Car()
{
    cout<<"Car Constructor"<<endl;
}

Car::Car(string name, string number, string status, int duration, float cost)
{
    m_name = name;
    m_vehicleNum = number;
    m_status = status;
    m_duration = duration;
    m_cost = cost;
}

Car::~Car()
{
    cout<<"Car Destructor"<<endl;
}
string Car::getName()
{
    return m_name;
}

string Car::getStatus()
{
    return m_status;
}

int Car::getDuration()
{
    return m_duration;
}

float Car::getCost()
{
    return m_cost;
}

string Car::getVehicleNum()
{
    return m_vehicleNum;
}

void Car::setVehicleNum(string vehicleNum)
{
    m_vehicleNum = vehicleNum;
}

void Car::setName(string name)
{
    m_name = name;
}

void Car::setStatus(string status)
{
    m_status = status;
}

void Car::setCost(float cost)
{
    m_cost = cost;
}


