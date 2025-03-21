#ifndef RENTAL_CUSTOMER_DETAILS_H
#define RENTAL_CUSTOMER_DETAILS_H

#include "PaymentMode.h"
#include "Rental_Vehicle_Details.h"

class Rental_Customer_details
{
public:
    Rental_Customer_details();
    Rental_Customer_details(string customerName, int bookingID, RentalVehicleDetails* vehicle, string vehicleStatus,string m_vehicleType,int rentalDuration, string isAmountPaid,float amountPaid,float balanceAmount);
    Rental_Customer_details(string customerName, int bookingID, RentalVehicleDetails* vehicle,PaymentMode* payMode, string vehicleStatus,string m_vehicleType,int rentalDuration, string isAmountPaid,float amountPaid,float balanceAmount);
    ~Rental_Customer_details();

    string getCusName();
    int getBookingID();
    string getVehicleName();
    string getVehicleNumber();
    string getVehicleStatus();
    void setVehicleModel(string vehicleModel);
    string getVehicleModel();
    void setVehicleStatus(string vehicleStatus);
    float getAmountPaid();
    void setAmountPaid(float amountPaid);
    float getBalanceAmount();
    void setBalanceAmount(float balanceAmount);
    string getVehicleType();
    float getVehicleCost();
    string getIsAmountPaid();
    int getRentalDuration();
    void setID(string ID);
    void setTransactionID(int transactionID);
    string getID();
    int getTransactionID();
    void setPaymentStatus(string paymentStatus);
    string getpaymentStatus();

private:
    string m_customerName;
    string m_vehicleType;
    string m_vehicleStatus;
    int m_bookingID;
    float m_amountPaid;
    float m_balanceAmount;
    RentalVehicleDetails* m_vehicle;
    string m_isAmountPaid;
    int m_rentalDuration;
    PaymentMode* m_payMode;

};

#endif // RENTAL_CUSTOMER_DETAILS_H
