#include "Customer_FileOperation.h"
#include "Bike.h"
#include "Car.h"
#include "Cash.h"
#include "UPI.h"
#include <iostream>
#include<fstream>

Customer_FileOperation::Customer_FileOperation()
{
    cout << "Customer_Fileoperation Constructor" << endl;
}

Customer_FileOperation::~Customer_FileOperation()
{
    cout << "Customer_Fileoperation Destructor" << endl;
    delete m_vehicle;
    delete m_payMode;
}

void Customer_FileOperation::writeData(list<Rental_Customer_details *> customerList)
{
    ofstream file("customer.csv");
    if (!file)
    {
        cout << "Error opening customer file for writing!" << endl;
        return ;
    }
    file<<"CustomerName"<<"BookingID"<<"VehicleName"<<"VehicleNumber"<<"RentalDuration"<<"vehicleType"<<"VehicleCost"<<"PaymentMode"<<"PaymentID"<<"TransactionID"<<"VehicleStatus"<<"AmountPaid"<<"DueAmount"<<"PaymentStatus"<<endl;
    for(auto i:customerList)
    {
        file<<i->getCusName()<<","<<i->getBookingID()<<","<<i->getVehicleName()<<","<<i->getVehicleNum()<<","<<i->getRentalDuration()<<","<<i->getVehicleType()<<","<<i->getVehicleCost()<<","<<i->getIsAmountPaid()<<","<<i->getID()<<","<<i->getTransactionID()<<","<<i->getVehicleStatus()<<","<<i->getAmountPaid()<<","<<i->getBalanceAmount()<<","<<i->getpaymentStatus()<<endl;
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

    string line, cusName,vehicleName,vehicleNum,paymentMode,vehicleType,vehicleStatus,cusVehicleStatus,paymentID,paymentStatus;
    int rentalDuration,bookingID,transactionID;
    float vehicleCost,amountPaid,balanceAmount;

    getline(file, line);
    while (getline(file, cusName, ',') && file >> bookingID  && file.ignore() && getline(file, vehicleName,',') && getline(file, vehicleNum, ',') &&  file >> rentalDuration && file.ignore() && getline(file, vehicleType, ',') && file >> vehicleCost  && file.ignore() && getline(file, paymentMode, ',') && getline(file, paymentID, ',') && file >> transactionID  && file.ignore() && getline(file, cusVehicleStatus,',') && file >> amountPaid  && file.ignore() && file >> balanceAmount && file.ignore() && getline(file, paymentStatus))
    {
        cout<<"vehicleType"<<vehicleType<<endl;
        if(vehicleType == "Bike" || vehicleType == "Bike" )
        {
            m_vehicle = new Bike(vehicleName, vehicleNum, vehicleCost, vehicleStatus);
            if("UPI" == paymentMode)
            {
                m_payMode = new UPI(paymentID,transactionID,paymentStatus);
                customerList.push_back(new Rental_Customer_details(cusName, bookingID, m_vehicle,m_payMode,cusVehicleStatus,vehicleType,rentalDuration,paymentMode,amountPaid,balanceAmount));
            }
            else if("Cash" == paymentMode)
            {
                m_payMode = new Cash(paymentID,transactionID,paymentStatus);
                customerList.push_back(new Rental_Customer_details(cusName, bookingID, m_vehicle,m_payMode, cusVehicleStatus, vehicleType, rentalDuration, paymentMode,amountPaid,balanceAmount));
            }
        }
        else if(vehicleType == "Car"||vehicleType == "car")
        {
            m_vehicle = new Car(vehicleName,vehicleNum,vehicleCost,vehicleStatus);
                if("UPI" == paymentMode)
                {
                    m_payMode = new UPI(paymentID,transactionID,paymentStatus);
                    customerList.push_back(new Rental_Customer_details(cusName, bookingID, m_vehicle,m_payMode,cusVehicleStatus,vehicleType,rentalDuration,paymentMode,amountPaid,balanceAmount));
                }
                else if("Cash" == paymentMode)
                {
                    m_payMode = new Cash(paymentID,transactionID,paymentStatus);
                    customerList.push_back(new Rental_Customer_details(cusName, bookingID, m_vehicle,m_payMode, cusVehicleStatus, vehicleType, rentalDuration, paymentMode,amountPaid,balanceAmount));
                }
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
