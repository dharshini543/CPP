#ifndef RENTAL_CUSTOMER_DETAILS_H
#define RENTAL_CUSTOMER_DETAILS_H

#include "Vehicle.h"

class Rental_Customer_details
{
public:
    Rental_Customer_details();
    Rental_Customer_details(string cusName, int bookingID, string Vehicle_name, string Vehicle_num, int rental_duration, string isAmountPaid);
    ~Rental_Customer_details();

    string getCusName();
    int getBookingID();
    string getVehicleName();
    string getVehicleNum();
    string getIsAmountPaid();
    int getRentalDuration();

private:
    string m_cus_name;
    int m_bookingID;
    Vehicle m_vehicle;
    string m_isAmountPaid;
    int m_rental_duration;
};

#endif // RENTAL_CUSTOMER_DETAILS_H
