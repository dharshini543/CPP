#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike:public Vehicle
{
public:
    Bike();
    Bike(string name, string status, int duration, float cost);
    ~Bike();
};

#endif // BIKE_H
