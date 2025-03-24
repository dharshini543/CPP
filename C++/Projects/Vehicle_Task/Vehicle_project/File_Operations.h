#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include "Rental_Bike_Details.h"
#include "Rental_Car_Details.h"
#include "Rental_Customer_details.h"
#include "User.h"
#include <list>

class File_Operations
{
public:
    File_Operations();
    ~File_Operations();

    virtual void writeData(list<RentalBikeDetails*> bikeList) = 0;
    virtual void writeData(list<Rental_Customer_details*> customerList) = 0;
    virtual void writeData(list<RentalCarDetails*> carList) = 0;
    virtual void writeData(list<User*> userList) = 0;

    auto readData();





};

#endif // FILE_OPERATIONS_H
