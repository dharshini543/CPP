#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car:public Vehicle
{
public:
    Car();
    Car(string carName, string carNumber, float carCost, string carStatus);
    ~Car();

    string getName();
    string getStatus();
    float getCost();
    string getVehicleNum();
    void setVehicleNum(string vehicleNum);
    void setName(string vehicleName);
    void setStatus(string vehicleStatus);
    void setCost(float vehicleCost);

};

#endif // CAR_H
