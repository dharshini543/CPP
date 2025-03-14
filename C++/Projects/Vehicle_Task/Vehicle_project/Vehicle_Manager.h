#ifndef VEHICLE_MANAGER_H
#define VEHICLE_MANAGER_H

#include "Bike.h"
#include "Bike_FileOperation.h"
#include "Car.h"
#include "Car_FileOperation.h"
#include "File_Operations.h"
#include "Rental_Customer_details.h"
#include <list>

class Vehicle_Manager
{
public:
    Vehicle_Manager();
    ~Vehicle_Manager();

    void addBike();
    void addCar();
    void bookBike();
    void bookCar();
    void returnBike();
    void returnCar();
    void displayBikeList();
    void displayCarList();
    void updateBikeCost();
    void updateCarCost();
    void addCustomer();

private:
    Car_FileOperation* m_carFO;
    Bike_FO* m_bikeFO;
    list<Bike> m_bike;
    list<Car> m_car;
    list<Rental_Customer_details> m_customer;
};

#endif // VEHICLE_MANAGER_H
