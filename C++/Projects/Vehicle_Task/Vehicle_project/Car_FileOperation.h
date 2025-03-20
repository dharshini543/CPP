#ifndef CAR_FILEOPERATION_H
#define CAR_FILEOPERATION_H

#include "Car.h"
#include <list>

class Car_FileOperation
{
public:
    Car_FileOperation();
    ~Car_FileOperation();

    void writeData(list<Car*> carList);
    list<Car*> readData();
};

#endif // CAR_FILEOPERATION_H
