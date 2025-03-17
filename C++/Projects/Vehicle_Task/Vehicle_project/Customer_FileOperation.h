#ifndef CUSTOMER_FILEOPERATION_H
#define CUSTOMER_FILEOPERATION_H

#include "Rental_Customer_details.h"
#include <list>
class Customer_FileOperation
{
public:
    Customer_FileOperation();
    ~Customer_FileOperation();
    void writeData(list<Rental_Customer_details*> customer);
    list<Rental_Customer_details *> readData();
};

#endif // CUSTOMER_FILEOPERATION_H
/*CustomerName          BookingID           VehicleName           VehicleNumber          AmountStatus       RentalDuration
  Dharshini	              101               RoyalEnfield            KA102                   5                   paid
  Likitha                 102               KTM                     KA105                   4                   paid
  Pallavi                 103               Discover                KA120                   3                   Notpaid
  Varshini                104               KTM                     KA195                   2                   Paid
  Darshan	              105               RoyalEnfield            KA125                   1                   Paid*/
