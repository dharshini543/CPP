#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include "Bike.h"
#include "Car.h"
#include "Rental_Customer_details.h"
#include <list>
class File_Operations
{
public:
    File_Operations();
    ~File_Operations();
    void writeData(list<Bike*> bike);
    auto readData();
    void writeData(list<Car*> car);
    void writeData(list<Rental_Customer_details*> customer);

};

#endif // FILE_OPERATIONS_H
