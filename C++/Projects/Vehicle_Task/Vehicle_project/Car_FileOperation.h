#ifndef CAR_FILEOPERATION_H
#define CAR_FILEOPERATION_H

#include "Rental_Car_Details.h"
#include <list>

class Car_FileOperation
{
public:
    Car_FileOperation();
    Car_FileOperation(const Car_FileOperation& car);
    ~Car_FileOperation();

    Car_FileOperation operator = (Car_FileOperation& car);

    void writeData(list<RentalCarDetails*> carList);
    list<RentalCarDetails*> readData();
};

#endif // CAR_FILEOPERATION_H
