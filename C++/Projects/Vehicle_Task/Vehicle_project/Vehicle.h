#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{

public:
    Vehicle();
    ~Vehicle();

    string getName();
    string getStatus();
    float getCost();
    string getVehicleNum();
    void setVehicleNum(string vehicleNum);
    void setName(string vehicleName);
    void setStatus(string vehicleStatus);
    void setCost(float vehicleCost);

protected:
    string m_vehicleNum;
    string m_vehicleName;
    string m_vehicleStatus;
    float m_vehicleCost;
};


#endif // VEHICLE_H
