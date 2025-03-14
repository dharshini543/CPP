#include "Vehicle_Manager.h"
#include "Bike_FileOperation.h"
#include "Car_FileOperation.h"
#include<iostream>
using namespace std;

Vehicle_Manager::Vehicle_Manager()
{
    cout<<"Vehicle Manager Constructor"<<endl;
}

Vehicle_Manager::~Vehicle_Manager()
{
    cout<<"Vehicle Manager Destructor"<<endl;
}

void Vehicle_Manager::addBike()
{
    for(int i = 0; i < 10; i++)
    {
    m_bike.push_back(Bike("Royal Enfield","Available",1,1500));
    }
    m_bikeFO = new Bike_FO;
    //m_bikeFO->writeData(m_bike);
    m_bike = m_bikeFO->readData();

}

void Vehicle_Manager::addCar()
{
    for(int i = 0; i < 10; i++)
    {
        m_car.push_back(Car("Royal Enfield","Available",1,1500));
    }
    m_carFO = new Car_FileOperation;
    //m_carFO->writeData(m_car);
    m_car = m_carFO->readData();
}

void Vehicle_Manager::bookBike()
{

}

void Vehicle_Manager::bookCar()
{

}

void Vehicle_Manager::returnBike()
{

}

void Vehicle_Manager::returnCar()
{

}

void Vehicle_Manager::displayBikeList()
{

}

void Vehicle_Manager::displayCarList()
{

}

void Vehicle_Manager::updateBikeCost()
{

}

void Vehicle_Manager::updateCarCost()
{

}

void Vehicle_Manager::addCustomer()
{

}
