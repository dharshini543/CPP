#ifndef RENTAL_BIKE_DETAILS_H
#define RENTAL_BIKE_DETAILS_H

#include "Rental_Vehicle_Details.h"

class RentalBikeDetails:public RentalVehicleDetails
{
public:
    RentalBikeDetails();
    RentalBikeDetails(string bikeName,string bikeModel, string bikeNumber, float bikeCost, string bikeStatus);
    ~RentalBikeDetails();

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

#endif // RENTAL_BIKE_DETAILS_H
