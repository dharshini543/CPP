#include "Rental_Bike_Details.h"
#include<iostream>
using namespace std;

RentalBikeDetails::RentalBikeDetails()
{
    cout<<"RentalBikeDetails Constructor"<<endl;
}

RentalBikeDetails::RentalBikeDetails(string bikeName, string bikeModel, string bikeNumber, float bikeCost, string bikeStatus)
{
    cout<<"RentalBikeDetails Constructor"<<endl;
    m_vehicleName = bikeName;
    m_vehicleNumber = bikeNumber;
    m_vehicleModel = bikeModel;
    m_vehicleStatus = bikeStatus;
    m_vehicleCost = bikeCost;
}

RentalBikeDetails::RentalBikeDetails(const RentalBikeDetails &bike)
{
    cout<< "RentalBikeDetails Copy constructor called"<<endl;
    m_vehicleName = bike.m_vehicleName;
    m_vehicleNumber = bike.m_vehicleNumber;
    m_vehicleModel = bike.m_vehicleModel;
    m_vehicleStatus = bike.m_vehicleStatus;
    m_vehicleCost = bike.m_vehicleCost;

}

RentalBikeDetails::~RentalBikeDetails()
{
    cout<<"RentalBikeDetails Destructor"<<endl;
}

RentalBikeDetails RentalBikeDetails::operator =(RentalBikeDetails &bike)
{
    cout<< "RentalBikeDetails assignment operator"<<endl;
    return bike;
}

string RentalBikeDetails::getVehicleName()
{
    return m_vehicleName;
}

string RentalBikeDetails::getVehicleStatus()
{
    return m_vehicleStatus;
}

float RentalBikeDetails::getVehicleCost()
{
    return m_vehicleCost;
}

string RentalBikeDetails::getVehicleNumber()
{
    return m_vehicleNumber;
}
string RentalBikeDetails::getVehicleModel()
{
    return m_vehicleModel;
}

void RentalBikeDetails::setVehicleModel(string vehicleModel)
{
    m_vehicleModel = vehicleModel;
}

void RentalBikeDetails::setVehicleNumber(string vehicleNumber)
{
    m_vehicleNumber = vehicleNumber;
}

void RentalBikeDetails::setVehicleName(string vehicleName)
{
    m_vehicleName = vehicleName;
}

void RentalBikeDetails::setVehicleStatus(string vehicleStatus)
{
    m_vehicleStatus = vehicleStatus;
}

void RentalBikeDetails::setVehicleCost(float vehicleCost)
{
    m_vehicleCost = vehicleCost;
}


