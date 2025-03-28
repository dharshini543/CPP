#include "Rental_Car_Details.h"
#include<iostream>
using namespace std;

RentalCarDetails::RentalCarDetails()
{
    cout<<"RentalCarDetails Constructor"<<endl;
}

RentalCarDetails::RentalCarDetails(string carName, string carModel, string carNumber, float carCost, string carStatus)
{
    cout<<"RentalCarDetails Constructor"<<endl;
    m_vehicleName = carName;
    m_vehicleNumber = carNumber;
    m_vehicleModel = carModel;
    m_vehicleStatus = carStatus;
    m_vehicleCost = carCost;
}

RentalCarDetails::RentalCarDetails(const RentalCarDetails &car)
{
    cout<< "RentalCarDetails Copy constructor called"<<endl;
    m_vehicleName = car.m_vehicleName;
    m_vehicleNumber = car.m_vehicleNumber;
    m_vehicleModel = car.m_vehicleModel;
    m_vehicleStatus = car.m_vehicleStatus;
    m_vehicleCost = car.m_vehicleCost;

}

RentalCarDetails::~RentalCarDetails()
{
    cout<<"RentalCarDetails Destructor"<<endl;
}

RentalCarDetails RentalCarDetails::operator =(RentalCarDetails &car)
{
    cout<< "RentalCarDetails assignment operator"<<endl;
    return car;
}

string RentalCarDetails::getVehicleName()
{
    return m_vehicleName;
}

string RentalCarDetails::getVehicleStatus()
{
    return m_vehicleStatus;
}

float RentalCarDetails::getVehicleCost()
{
    return m_vehicleCost;
}

string RentalCarDetails::getVehicleNumber()
{
    return m_vehicleNumber;
}
string RentalCarDetails::getVehicleModel()
{
    return m_vehicleModel;
}

void RentalCarDetails::setVehicleModel(string vehicleModel)
{
    m_vehicleModel = vehicleModel;
}

void RentalCarDetails::setVehicleNumber(string vehicleNumber)
{
    m_vehicleNumber = vehicleNumber;
}

void RentalCarDetails::setVehicleName(string vehicleName)
{
    m_vehicleName = vehicleName;
}

void RentalCarDetails::setVehicleStatus(string vehicleStatus)
{
    m_vehicleStatus = vehicleStatus;
}

void RentalCarDetails::setVehicleCost(float vehicleCost)
{
    m_vehicleCost = vehicleCost;
}


