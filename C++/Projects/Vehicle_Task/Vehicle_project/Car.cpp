#include "Car.h"
#include<iostream>
using namespace std;

Car::Car()
{
    cout<<"Car Constructor"<<endl;
}

Car::Car(string name, int duration, string number, float cost, string status)
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
