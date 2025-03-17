#include "Vehicle_Manager.h"
#include <iostream>

using namespace std;
enum
{
    addBike = 1,
    addCar,
    addCustomer,
    displayBike,
    displayCar,
    displayCustomer,
    bookBike,
    bookCar,
    returnBike,
    returnCar,
    updateBikeCost,
    updateCarCost
};

int main()
{
    Vehicle_Manager VM;
    int choice;
    string name,status,number;
    int duration;
    float cost;
    while(true)
    {
    cout<<"Enter"<<endl<<"1. Add Bike"<<endl<<"2. Add Car"<<endl;
    cout<<"3. Add Customer details"<<endl<<"4. Display Bike List"<<endl;
    cout<<"5. Display Car list"<<endl<<"6. Customers History"<<endl<<"7. Book Bike"<<endl<<"8. Book Car"<<endl;
    cout<<"9. Return Bike"<<endl<<"10. Return Car"<<endl<<"11. Update Bike Cost"<<endl;
    cout<<"12.Update Car Cost"<<endl;
    cin>>choice;
    switch(choice)
    {
    case addBike:
    {
        cout<<"Enter BikeName"<<endl;
        cin>>name;
        cout<<"Enter BikeNumber"<<endl;
        cin>>number;
        cout<<"Enter Bikestatus"<<endl;
        cin>>status;
        cout<<"Enter Bike duration"<<endl;
        cin>>duration;
        cout<<"Enter Bike cost per day"<<endl;
        cin>>cost;
        VM.addBike(name, number, status,duration,cost);

    }
    break;
    case addCar:
    {
        cout<<"Enter Ca rName"<<endl;
        cin>>name;
        cout<<"Enter Car Number"<<endl;
        cin>>name;
        cout<<"Enter  Car status"<<endl;
        cin>>status;
        cout<<"Enter Car duration"<<endl;
        cin>>duration;
        cout<<"Enter Car cost per day"<<endl;
        cin>>cost;
        VM.addCar(name,number,status,duration,cost);

    }
    break;
    case addCustomer:
    {
        string cusName;
        int bookingID;
        string Vehicle_name;
        string Vehicle_num;
        int rental_duration;
        string isAmountPaid;
        cout<<"Enter Name"<<endl;
        cin>>cusName;
        cout<<"Enter BookingID"<<endl;
        cin>>bookingID;
        cout<<"Enter Rented Vehicle name"<<endl;
        cin>>Vehicle_name;
        cout<<"Enter Rented Vehicle number"<<endl;
        cin>>Vehicle_num;
        cout<<"Enter Rental Duration"<<endl;
        cin>>rental_duration;
        cout<<"Enter AmountPaid"<<endl;
        cin>>cusName;
        VM.addCustomer(cusName,bookingID,Vehicle_name,Vehicle_num,rental_duration,isAmountPaid);
    }
    break;
    case displayBike:
    {
        VM.displayBikeList();
    }
    break;
    case displayCar:
    {
        VM.displayCarList();
    }
    break;
    case displayCustomer:
    {
        VM.displayCustomerList();
    }
    case bookBike:
    {
        VM.bookBike();
        VM.displayBikeList();
    }
    break;
    case bookCar:
    {
        VM.bookCar();
        VM.displayBikeList();
    }
    break;
    case returnBike:
    {
        VM.returnBike();
        VM.displayBikeList();
    }
    break;
    case returnCar:
    {
        VM.returnCar();
        VM.displayBikeList();
    }
    break;
    case updateBikeCost:
    {
        VM.updateBikeCost();
    }
    break;
    case updateCarCost:
    {
        VM.updateCarCost();
    }
    break;
    default:
        cout<<"Invalid input"<<endl;

    }
    }
    return 0;
}
