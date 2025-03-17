#ifndef VEHICLE_MANAGER_H
#define VEHICLE_MANAGER_H

#include "Bike.h"
#include "Bike_FileOperation.h"
#include "Car.h"
#include "Car_FileOperation.h"
#include "Customer_FileOperation.h"
#include "Rental_Customer_details.h"
#include <list>

class Vehicle_Manager
{
public:
    Vehicle_Manager();
    ~Vehicle_Manager();

    void addBike(string name,string number, string status, int duration, float cost);
    void addCar(string name,string number, string status, int duration, float cost);
    void bookBike();
    void bookCar();
    void returnBike();
    void returnCar();
    void displayBikeList();
    void displayCarList();
    void displayCustomerList();
    void updateBikeCost();
    void updateCarCost();
    void addCustomer(string cusName, int bookingID, string Vehicle_name, string Vehicle_num, int rental_duration, string isAmountPaid);

private:
    Car_FileOperation* m_carFO;
    Bike_FO* m_bikeFO;
    Customer_FileOperation* m_cusFO;
    list<Bike*> m_bike;
    list<Car*> m_car;
    list<Rental_Customer_details*> m_customer;
};

#endif // VEHICLE_MANAGER_H
