#include "Rental_Customer_details.h"
#include <iostream>

Rental_Customer_details::Rental_Customer_details(string cusName, int bookingID, string Vehicle_name, string Vehicle_num, int rental_duration, string isAmountPaid)
{
    cout<<"Customer Constructor"<<endl;
    m_cus_name = cusName;
    m_bookingID = bookingID;
    m_vehicle.setName(Vehicle_name);
    m_vehicle.setVehicleNum(Vehicle_num);
    m_rental_duration = rental_duration;
    m_isAmountPaid = isAmountPaid;
}

Rental_Customer_details::~Rental_Customer_details()
{
    cout<<"Customer Destructor"<<endl;
}

string Rental_Customer_details::getCusName()
{
    return m_cus_name;
}

int Rental_Customer_details::getBookingID()
{
    return m_bookingID;
}

string Rental_Customer_details::getVehicleName()
{
    return m_vehicle.getName();
}

string Rental_Customer_details::getVehicleNum()
{
    return m_vehicle.getVehicleNum();
}

string Rental_Customer_details::getIsAmountPaid()
{
    return m_isAmountPaid;
}

int Rental_Customer_details::getRentalDuration()
{
    return m_rental_duration;
}
