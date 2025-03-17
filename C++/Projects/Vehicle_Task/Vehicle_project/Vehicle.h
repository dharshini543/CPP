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
    int getDuration();
    float getCost();
    string getVehicleNum();
    void setVehicleNum(string vehicleNum);
    void setName(string name);
    void setStatus(string status);
    void setCost(float cost);

protected:
    string m_vehicleNum;
    string m_name;
    string m_status;
    int m_duration;
    float m_cost;
};


#endif // VEHICLE_H
