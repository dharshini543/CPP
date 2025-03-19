#ifndef RENTAL_CUSTOMER_DETAILS_H
#define RENTAL_CUSTOMER_DETAILS_H

#include "Vehicle.h"

class Rental_Customer_details
{
public:
    Rental_Customer_details();
    Rental_Customer_details(string customerName, int bookingID, Vehicle* vehicle,string vehicleStatus,string m_vehicleType,int rentalDuration, string isAmountPaid,float amountPaid,float balanceAmount);
    ~Rental_Customer_details();

    string getCusName();
    int getBookingID();
    string getVehicleName();
    string getVehicleNum();
    string getVehicleStatus();
    void setVehicleStatus(string vehicleStatus);
    float getAmountPaid();
    float getBalanceAmount();
    string getVehicleType();
    float getVehicleCost();
    string getIsAmountPaid();
    int getRentalDuration();

private:
    string m_customerName;
    string m_vehicleType;
    string m_vehicleStatus;
    int m_bookingID;
    float m_amountPaid;
    float m_balanceAmount;
    Vehicle* m_vehicle;
    string m_isAmountPaid;
    int m_rentalDuration;
};

#endif // RENTAL_CUSTOMER_DETAILS_H
