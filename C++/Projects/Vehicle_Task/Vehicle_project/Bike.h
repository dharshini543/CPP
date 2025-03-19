#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike:public Vehicle
{
public:
    Bike();
    Bike(string bikeName, string bikeNumber, float bikeCost, string bikeStatus);
    ~Bike();

};

#endif // BIKE_H
