#include "Rental_Customer_details.h"
#include <iostream>

Rental_Customer_details::Rental_Customer_details()
{
    cout<<"Customer Constructor"<<endl;
}

Rental_Customer_details::Rental_Customer_details(string customerName, int bookingID, Vehicle* vehicle, string vehicleStatus, string vehicleType, int rentalDuration, string isAmountPaid, float amountPaid, float balanceAmount)
{
    cout<<"Customer Constructor"<<endl;
    m_customerName = customerName;
    m_bookingID = bookingID;
    m_vehicle = vehicle;
    m_vehicleStatus = vehicleStatus;
    m_vehicleType = vehicleType;
    m_rentalDuration = rentalDuration;
    m_isAmountPaid = isAmountPaid;
    m_amountPaid = amountPaid;
    m_balanceAmount = balanceAmount;
}

Rental_Customer_details::Rental_Customer_details(string customerName, int bookingID, Vehicle *vehicle, PaymentMode *payMode, string vehicleStatus, string vehicleType, int rentalDuration, string isAmountPaid, float amountPaid, float balanceAmount)
{
    cout<<"Customer Constructor"<<endl;
    m_customerName = customerName;
    m_bookingID = bookingID;
    m_vehicle = vehicle;
    m_payMode = payMode;
    m_vehicleStatus = vehicleStatus;
    m_vehicleType = vehicleType;
    m_rentalDuration = rentalDuration;
    m_isAmountPaid = isAmountPaid;
    m_amountPaid = amountPaid;
    m_balanceAmount = balanceAmount;
}

Rental_Customer_details::~Rental_Customer_details()
{
    cout<<"Customer Destructor"<<endl;
}

string Rental_Customer_details::getCusName()
{
    return m_customerName;
}

int Rental_Customer_details::getBookingID()
{
    return m_bookingID;
}

string Rental_Customer_details::getVehicleName()
{
    return m_vehicle->getName();
}

string Rental_Customer_details::getVehicleNum()
{
    return m_vehicle->getVehicleNum();
}

string Rental_Customer_details::getVehicleStatus()
{
    return m_vehicleStatus;
}

void Rental_Customer_details::setVehicleStatus(string vehicleStatus)
{
    m_vehicleStatus = vehicleStatus;
}

float Rental_Customer_details::getAmountPaid()
{
    return m_amountPaid;
}

void Rental_Customer_details::setAmountPaid(float amountPaid)
{
    m_amountPaid = amountPaid;
}

float Rental_Customer_details::getBalanceAmount()
{
    return m_balanceAmount;
}

void Rental_Customer_details::setBalanceAmount(float balanceAmount)
{
    m_balanceAmount = balanceAmount;
}

string Rental_Customer_details::getVehicleType()
{
    return m_vehicleType;
}

float Rental_Customer_details::getVehicleCost()
{
    return m_vehicle->getCost();
}

string Rental_Customer_details::getIsAmountPaid()
{
    return m_isAmountPaid;
}

int Rental_Customer_details::getRentalDuration()
{
    return m_rentalDuration;
}
void Rental_Customer_details::setID(string ID)
{
    m_payMode->setID(ID);
}

void Rental_Customer_details::setTransactionID(int transactionID)
{
    m_payMode->setTransactionID(transactionID);
}

string Rental_Customer_details::getID()
{
    return m_payMode->getID();
}

int Rental_Customer_details::getTransactionID()
{
    return m_payMode->getTransactionID();
}

void Rental_Customer_details::setPaymentStatus(string paymentStatus)
{
    m_payMode->setPaymentStatus(paymentStatus);
}

string Rental_Customer_details::getpaymentStatus()
{
    return m_payMode->getPaymentStatus();
}
