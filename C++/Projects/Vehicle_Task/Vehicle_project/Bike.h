#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike:public Vehicle
{
public:
    Bike();
    Bike(string name, string number, string status, int duration, float cost);
    ~Bike();

    string getName();
    string getStatus();
    int getDuration();
    float getCost();
    string getVehicleNum();
    void setVehicleNum(string vehicleNum);
    void setName(string name);
    void setStatus(string status);
    void setCost(float cost);
};

#endif // BIKE_H
