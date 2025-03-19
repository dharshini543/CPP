#include "Car.h"
#include<iostream>
using namespace std;

Car::Car()
{
    cout<<"Car Constructor"<<endl;
}

Car::Car(string carName, string carNumber, float carCost, string carStatus)
{
    m_vehicleName = carName;
    m_vehicleNum = carNumber;
    m_vehicleStatus = carStatus;
    m_vehicleCost = carCost;
}

Car::~Car()
{
    cout<<"Car Destructor"<<endl;
}
