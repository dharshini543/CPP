#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike:public Vehicle
{
public:
    Bike();
    Bike(string bikeName, string bikeNumber, float bikeCost, string bikeStatus);
    ~Bike();

    string getName();
    string getStatus();
    float getCost();
    string getVehicleNum();
    void setVehicleNum(string vehicleNum);
    void setName(string vehicleName);
    void setStatus(string vehicleStatus);
    void setCost(float vehicleCost);

};

#endif // BIKE_H
