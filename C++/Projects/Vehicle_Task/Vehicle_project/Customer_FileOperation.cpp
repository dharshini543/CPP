#include "Customer_FileOperation.h"
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

void Customer_FileOperation::writeData(list<Rental_Customer_details *> customer)
{
    ofstream file("customer.csv");
    if (!file)
    {
        cout << "Error opening customer file for writing!" << endl;
        return ;
    }
    file<<"CustomerName"<<"BookingID"<<"VehicleName"<<"VehicleNumber"<<"RentalDuration"<<"AmountStatus"<<endl;
    for(auto i:customer)
    {
        file<<i->getCusName()<<","<<i->getBookingID()<<" "<<i->getVehicleName()<<","<<i->getVehicleNum()<<","<<i->getRentalDuration()<<","<<i->getIsAmountPaid()<<endl;
    }
    cout<<"Data written to Customer file"<<endl;
    file.close();
}

list<Rental_Customer_details *> Customer_FileOperation::readData()
{
    list<Rental_Customer_details*> customer;
    ifstream file("customer.csv");
    if (!file)
    {
        cout << "Error opening customer file for reading!" << endl;
        return customer;
    }

    string line, Cusname,VehicleName,VehicleNum,amountstatus;
    int rentalduration,bookingID;

    getline(file, line);
    while (getline(file, Cusname, ',') && file >> bookingID  && file.ignore() && getline(file, VehicleName,',') && getline(file, VehicleNum, ',') &&  file >> rentalduration && file.ignore() && getline(file, amountstatus)  )
    {
        customer.push_back(new Rental_Customer_details(Cusname, bookingID, VehicleName, VehicleNum, rentalduration, amountstatus));
    }
    file.close();
    cout<<"Data read from Customer file"<<endl;

    return customer;
}
