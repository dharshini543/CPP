#include "Vehicle_Manager.h"
#include "Bike_FileOperation.h"
#include "Car_FileOperation.h"
#include "Customer_FileOperation.h"
#include "Rental_Customer_details.h"
#include<iostream>
using namespace std;

Vehicle_Manager::Vehicle_Manager()
{
    cout<<"Vehicle Manager Constructor"<<endl;
    m_bikeFO = new Bike_FO;
    m_cusFO = new Customer_FileOperation;
    m_cusFO = new Customer_FileOperation;
    //m_cusFO->writeData(m_customer);
    //m_carFO->writeData(m_car);
    //m_bikeFO->writeData(m_bike);
    m_customer = m_cusFO->readData();
    m_car = m_carFO->readData();
    m_bike = m_bikeFO->readData();
}

Vehicle_Manager::~Vehicle_Manager()
{
    cout<<"Vehicle Manager Destructor"<<endl;
}

void Vehicle_Manager::addBike(string name,string number, string status, int duration, float cost)
{
    m_bike.push_back(new Bike(name,number, status, duration, cost));
    m_bikeFO->writeData(m_bike);
    m_bike = m_bikeFO->readData();

}

void Vehicle_Manager::addCar(string name,string number, string status, int duration, float cost)
{
    m_car.push_back(new Car(name, number, status,duration, cost));
    m_carFO->writeData(m_car);
    m_car = m_carFO->readData();
}

void Vehicle_Manager::addCustomer(string cusName, int bookingID, string Vehicle_name, string Vehicle_num, int rental_duration, string isAmountPaid)
{
    m_customer.push_back(new Rental_Customer_details(cusName, bookingID,Vehicle_name, Vehicle_num,rental_duration,isAmountPaid));
    m_cusFO->writeData(m_customer);
    m_customer = m_cusFO->readData();
}

void Vehicle_Manager::bookBike()
{
    string name,number;
    cout<<"Enter name of bike to book"<<endl;
    cin>>name;
    cout<<"Enter Bike number"<<endl;
    cin>>number;

    for(auto* i:m_bike)
    {
        if(i->getName() == name || i->getVehicleNum() == number)
        {
            if(i->getStatus() == "Available")
            {
                i->setStatus("Booked");
                cout<<name<<" bike is Booked"<<endl;
            }
        }
    }
    m_bikeFO->writeData(m_bike);
}

void Vehicle_Manager::bookCar()
{
    string name,number;
    cout<<"Enter name of car to book"<<endl;
    cin>>name;
    cout<<"Enter Car number"<<endl;
    cin>>number;
    for(auto* i:m_car)
    {
        if(i->getName() == name || i->getVehicleNum() == number)
        {
            if(i->getStatus() == "Available")
            {
                i->setStatus("Booked");
                cout<<name<<" Car is Booked"<<endl;
            }
        }
    }
    m_carFO->writeData(m_car);
}

void Vehicle_Manager::returnBike()
{
    string name,number;
    cout<<"Enter name of Bike to return"<<endl;
    cin>>name;
    cout<<"Enter Bike number"<<endl;
    cin>>number;
    for(auto* i:m_bike)
    {
        if(i->getName() == name || i->getVehicleNum() == number)
        {
            if(i->getStatus() == "Booked")
            {
                i->setStatus("Available");
                cout<<name<<" Bike is returned"<<endl;
            }
        }
    }
    m_bikeFO->writeData(m_bike);
}

void Vehicle_Manager::returnCar()
{
    string name,number;
    cout<<"Enter name of car to return"<<endl;
    cin>>name;
    cout<<"Enter Car number"<<endl;
    cin>>number;
    for(auto i:m_car)
    {
        cout<<"HII"<<endl;
        if(i->getName() == name || i->getVehicleNum() == number)
        {
            if(i->getStatus() == "Booked")
            {
                i->setStatus("Available");
                cout<<name<<" Car is returned"<<endl;
            }
        }
    }
    m_carFO->writeData(m_car);
}

void Vehicle_Manager::displayBikeList()
{
    for(auto* i:m_bike)
    {
        cout<<"Name :"<<i->getName()<<","<<"VehicleNum :"<<i->getVehicleNum()<<","<<"VehicleStatus :"<<i->getStatus()<<","<<"Duration :"<<i->getDuration()<<","<<"CostPerDay :"<<i->getCost()<<endl;
    }
}

void Vehicle_Manager::displayCarList()
{
    for(auto* i:m_car)
    {
        cout<<"Name :"<<i->getName()<<","<<"VehicleNum :"<<i->getVehicleNum()<<","<<"VehicleStatus :"<<i->getStatus()<<","<<"Duration :"<<i->getDuration()<<","<<"CostPerDay :"<<i->getCost()<<endl;
    }
}

void Vehicle_Manager::displayCustomerList()
{
    //m_customer = m_cusFO->readData();
    for(auto i:m_customer)
    {
        cout<<"CustomerName :"<<i->getCusName()<<","<<"BookingID :"<<i->getBookingID()<<","<<"VehicleName :"<<i->getVehicleName()<<","<<"VehicleNum :"<<i->getVehicleNum()<<","<<"RentalDuration :"<<i->getRentalDuration()<<","<<"AmountStatus :"<<i->getIsAmountPaid()<<endl;
    }
}

void Vehicle_Manager::updateBikeCost()
{
    float newAmount;
    string number, name;
    cout<<"Enter vehicle name to update price"<<endl;
    cin>>name;
    cout<<"Enter vehicle number to update price"<<endl;
    cin>>number;
    cout<<"Enter updated bike cost"<<endl;
    cin>>newAmount;
    for(auto i:m_bike)
    {
        if(i->getName() == name || i->getVehicleNum() == number)
        {
            i->setCost(newAmount);
            cout<<name<<" with vehicle number"<<number<<"updated"<<endl;
        }
    }
    m_bikeFO->writeData(m_bike);

}

void Vehicle_Manager::updateCarCost()
{
    float newAmount;
    string number, name;
    cout<<"Enter vehicle name to update price"<<endl;
    cin>>name;
    cout<<"Enter vehicle number to update price"<<endl;
    cin>>number;
    cout<<"Enter updated bike cost"<<endl;
    cin>>newAmount;
    for(auto i:m_car)
    {
        if(i->getName() == name || i->getVehicleNum() == number)
        {
            i->setCost(newAmount);
            cout<<name<<" with vehicle number"<<number<<"updated"<<endl;
        }
    }
    m_carFO->writeData(m_car);
}

