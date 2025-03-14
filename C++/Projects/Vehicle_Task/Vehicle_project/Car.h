#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
class Car:public Vehicle
{
public:
    Car();
    Car(string name, string status, int duration, float cost);
    ~Car();
};

#endif // CAR_H
