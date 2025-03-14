#include "Bike.h"
#include<iostream>
using namespace std;

Bike::Bike()
{
    cout<<"Bike Constructor"<<endl;
}

Bike::Bike(string name, string status, int duration, float cost)
{
    m_name = name;
    m_status = status;
    m_duration = duration;
    m_cost = cost;
}

Bike::~Bike()
{
    cout<<"Bike Destructor"<<endl;
}
