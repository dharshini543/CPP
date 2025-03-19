#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
class Car:public Vehicle
{
public:
    Car();
    Car(string carName, string carNumber, float carCost, string carStatus);
    ~Car();

};

#endif // CAR_H
