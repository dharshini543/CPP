#ifndef VEHICLE_MANAGER_H
#define VEHICLE_MANAGER_H

#include "Rental_Bike_Details.h"
#include "Bike_FileOperation.h"
#include "Rental_Car_Details.h"
#include "Car_FileOperation.h"
#include "Customer_FileOperation.h"
#include "Rental_Customer_details.h"
#include <list>

enum
{
    ADD_VEHICLE = 1,
    DELETE_VEHICLE,
    SEARCH_VEHICLE,
    DISPLAY_VEHICLES,
    BOOK_VEHICLE,
    RETURN_VEHICLE,
    UPDATE_VEHICLE_PRICE,
    CUSTOMER_RECORD,
    LOGOUT
};

enum ADD_VEHICLE
{
   Add_Bike = 1,
   Add_Car
};
enum DELETE_VEHICLE
{
    Delete_Bike = 1,
    Delete_Car
};
enum SEARCH_VEHICLE
{
    Search_Bike = 1,
    Search_Car
};
enum DISPLAY_BIKE
{
    Display_Bike  = 1,
    Sort_By_Price,
    Sort_By_Name,
    Sort_By_Status
};
enum DISPLAY_CAR
{
    DisplayCar = 1,
    SortByPrice,
    SortByName,
    SortByStatus
};
enum Display{
    DISPLAY_BIKE = 1,
    DISPLAY_CAR
};

enum BOOK_VEHICLE
{
    Book_Bike = 1,
    Book_Car
};
enum RETURN_VEHICLE
{
    Return_Bike = 1,
    Return_Car
};
enum UPDATE_VEHICLE_PRICE
{
    Update_Bike_price = 1,
    Update_Car_price
};

class Vehicle_Manager
{
public:
    Vehicle_Manager();
    ~Vehicle_Manager();

    int main_menu();
    void addBike();
    void addCar();
    void deleteBike();
    void deleteCar();
    void searchBike();
    void searchCar();
    void sortByBikePrice();
    void sortByBikeName();
    void sortByBikeStatus();
    void sortByCarPrice();
    void sortByCarName();
    void sortByCarStatus();
    void bookBike();
    void bookCar();
    void returnBike();
    void returnCar();
    void displayBikeList();
    void displayCarList();
    void displayCustomerList();
    void updateBikeCost();
    void updateCarCost();
    void addCustomer(string vehicleName,string vehicleModel, string vehicleStatus, float vehicleCost, string vehicleNumber);
    void writeDataToFile();
    int payment(float balanceAmount);


private:
    Car_FileOperation* m_carFO;
    Bike_FO* m_bikeFO;
    Customer_FileOperation* m_cusFO;
    list<RentalBikeDetails*> m_bikelist;
    list<RentalCarDetails*> m_carlist;
    list<Rental_Customer_details*> m_customerlist;
};



#endif // VEHICLE_MANAGER_H
