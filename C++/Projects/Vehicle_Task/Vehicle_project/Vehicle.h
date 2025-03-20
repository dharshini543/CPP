#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{

public:
    Vehicle();
    virtual ~Vehicle();

    virtual string getName();
    virtual string getStatus();
    virtual float getCost();
    virtual string getVehicleNum();
    virtual void setVehicleNum(string vehicleNum);
    virtual void setName(string vehicleName);
    virtual void setStatus(string vehicleStatus);
    virtual void setCost(float vehicleCost);

protected:
    string m_vehicleNum;
    string m_vehicleName;
    string m_vehicleStatus;
    float m_vehicleCost;
};


#endif // VEHICLE_H
