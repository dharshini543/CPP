#ifndef RENTAL_CAR_DETAILS_H
#define RENTAL_CAR_DETAILS_H

#include "Rental_Vehicle_Details.h"

class RentalCarDetails:public RentalVehicleDetails
{
public:
    RentalCarDetails();
    RentalCarDetails(string carName,string carModel, string carNumber, float carCost, string carStatus);
    ~RentalCarDetails();

    string getVehicleName();
    string getVehicleStatus();
    float getVehicleCost();
    string getVehicleNumber();
    string getVehicleModel();
    void setVehicleModel(string vehicleModel);
    void setVehicleNumber(string vehicleNumber);
    void setVehicleName(string vehicleName);
    void setVehicleStatus(string vehicleStatus);
    void setVehicleCost(float vehicleCost);


};

#endif // RENTAL_CAR_DETAILS_H
