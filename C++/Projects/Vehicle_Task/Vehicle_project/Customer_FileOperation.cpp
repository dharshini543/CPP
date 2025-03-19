#include "Customer_FileOperation.h"
#include "Bike.h"
#include "Car.h"
#include <iostream>
#include<fstream>

Customer_FileOperation::Customer_FileOperation()
{
    cout << "Customer_Fileoperation Constructor" << endl;
}

Customer_FileOperation::~Customer_FileOperation()
{
    cout << "Customer_Fileoperation Destructor" << endl;
}

void Customer_FileOperation::writeData(list<Rental_Customer_details *> customerList)
{
    ofstream file("customer.csv");
    if (!file)
    {
        cout << "Error opening customer file for writing!" << endl;
        return ;
    }
    file<<"CustomerName"<<"BookingID"<<"VehicleName"<<"VehicleNumber"<<"RentalDuration"<<"vehicleType"<<"VehicleCost"<<"AmountStatus"<<"VehicleStatus"<<"AmountPaid"<<"Due Amount"<<endl;
    for(auto i:customerList)
    {
        file<<i->getCusName()<<","<<i->getBookingID()<<","<<i->getVehicleName()<<","<<i->getVehicleNum()<<","<<i->getRentalDuration()<<","<<i->getVehicleType()<<","<<i->getVehicleCost()<<","<<i->getIsAmountPaid()<<","<<i->getVehicleStatus()<<i->getAmountPaid()<<i->getBalanceAmount()<<endl;
    }
    cout<<"Data written to Customer file"<<endl;
    file.close();
}

list<Rental_Customer_details *> Customer_FileOperation::readData()
{
    list<Rental_Customer_details*> customerList;
    ifstream file("customer.csv");
    if (!file)
    {
        cout << "Error opening customer file for reading!" << endl;
        return customerList;
    }

    string line, cusName,vehicleName,vehicleNum,amountStatus,vehicleType,vehicleStatus,cusVehicleStatus;
    int rentalDuration,bookingID;
    float vehicleCost,amountPaid,balanceAmount;

    getline(file, line);
    while (getline(file, cusName, ',') && file >> bookingID  && file.ignore() && getline(file, vehicleName,',') && getline(file, vehicleNum, ',') &&  file >> rentalDuration && file.ignore() && getline(file, vehicleType, ',') && file >> vehicleCost  && file.ignore() && getline(file, amountStatus, ',') &&  getline(file, vehicleStatus,',') && getline(file, cusVehicleStatus,',')&& file >> amountPaid  && file.ignore()&& file >> balanceAmount  && file.ignore())
    {
        if(vehicleType == "Bike"||vehicleType == "bike")
        {
            Bike* bike = new Bike(vehicleName, vehicleNum, vehicleCost, vehicleStatus);
            customerList.push_back(new Rental_Customer_details(cusName, bookingID, bike,cusVehicleStatus,vehicleType,rentalDuration, amountStatus,amountPaid,balanceAmount));
        }
        else if(vehicleType == "Car"||vehicleType == "car")
        {
            Car* car = new Car(vehicleName,vehicleNum,vehicleCost,vehicleStatus);
            customerList.push_back(new Rental_Customer_details(cusName, bookingID, car,cusVehicleStatus,vehicleType,rentalDuration, amountStatus,amountPaid,balanceAmount));
        }
        else
        {
            break;
        }
    }
    file.close();
    cout<<"Data read from Customer file"<<endl;

    return customerList;
}
