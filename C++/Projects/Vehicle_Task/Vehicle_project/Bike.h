#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike:public Vehicle
{
public:
    Bike();
    Bike(string name, int duration, string number, float cost, string status);
    ~Bike();

};

#endif // BIKE_H
