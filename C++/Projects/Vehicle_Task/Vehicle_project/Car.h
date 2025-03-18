#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
class Car:public Vehicle
{
public:
    Car();
    Car(string name, int duration, string number, float cost, string status);
    ~Car();

};

#endif // CAR_H
