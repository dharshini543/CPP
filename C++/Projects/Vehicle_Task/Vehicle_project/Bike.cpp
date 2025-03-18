#include "Bike.h"
#include<iostream>
using namespace std;

Bike::Bike()
{
    cout<<"Bike Constructor"<<endl;
}

Bike::Bike(string name, int duration, string number, float cost, string status)
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

