#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
class Car:public Vehicle
{
public:
    Car();
    Car(string name, string number, string status, int duration, float cost);
    ~Car();

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

#endif // CAR_H
