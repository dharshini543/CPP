#ifndef RENTAL_VEHICLE_DETAILS_H
#define RENTAL_VEHICLE_DETAILS_H
#include <string>
using namespace std;

class RentalVehicleDetails
{

public:
    RentalVehicleDetails();
    virtual ~RentalVehicleDetails();

    virtual string getVehicleName();
    virtual string getVehicleStatus();
    virtual float getVehicleCost();
    virtual string getVehicleNumber();
    virtual string getVehicleModel();
    virtual void setVehicleModel(string vehicleModel);
    virtual void setVehicleNumber(string vehicleNumber);
    virtual void setVehicleName(string vehicleName);
    virtual void setVehicleStatus(string vehicleStatus);
    virtual void setVehicleCost(float vehicleCost);

protected:
    string m_vehicleNumber;
    string m_vehicleName;
    string m_vehicleStatus;
    string m_vehicleModel;
    float m_vehicleCost;
};


#endif // RENTAL_VEHICLE_DETAILS_H
