#include "Car.h"
#include<iostream>
using namespace std;

Car::Car()
{
    cout<<"Car Constructor"<<endl;
}

Car::Car(string name, string status, int duration, float cost)
{
    m_name = name;
    m_status = status;
    m_duration = duration;
    m_cost = cost;
}

Car::~Car()
{
    cout<<"Car Destructor"<<endl;
}
