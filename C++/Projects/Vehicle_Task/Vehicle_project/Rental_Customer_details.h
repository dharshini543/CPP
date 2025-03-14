#ifndef RENTAL_CUSTOMER_DETAILS_H
#define RENTAL_CUSTOMER_DETAILS_H

#include "Vehicle.h"
class Rental_Customer_details
{
public:
    Rental_Customer_details();
    ~Rental_Customer_details();

private:
    string m_cus_name;
    int m_bookingID;
    Vehicle m_vehicle;
    bool m_amountPaid;
    int m_rental_duration;
};

#endif // RENTAL_CUSTOMER_DETAILS_H
