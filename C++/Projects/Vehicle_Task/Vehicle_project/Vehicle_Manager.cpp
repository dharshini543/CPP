#include "Vehicle_Manager.h"
#include "Bike_FileOperation.h"
#include "Car_FileOperation.h"
#include "Cash.h"
#include "Customer_FileOperation.h"
#include "Rental_Customer_details.h"
#include "UPI.h"
#include <cstring>
#include <string>
#include<iostream>
using namespace std;

Vehicle_Manager::Vehicle_Manager()
{
    cout<<"Vehicle Manager Constructor"<<endl;
    m_bikeFO = new Bike_FO;
    m_carFO = new Car_FileOperation;
    m_cusFO = new Customer_FileOperation;
    /*m_bikeFO->writeData(m_bikelist);
    m_carFO->writeData(m_carlist);
    m_cusFO->writeData(m_customerlist);*/
    m_customerlist = m_cusFO->readData();
    m_carlist = m_carFO->readData();
    m_bikelist = m_bikeFO->readData();
}

Vehicle_Manager::~Vehicle_Manager()
{
    cout<<"Vehicle Manager Destructor"<<endl;
    delete m_bikeFO;
    delete m_cusFO;
    delete m_carFO;
    for(auto* bike : m_bikelist)
    {
        delete bike;
    }
    for(auto* car : m_carlist)
    {
        delete car;
    }
    for(auto* customer : m_customerlist)
    {
        delete customer;
    }
    delete m_payMode;
    delete m_vehicle;

}

int Vehicle_Manager::main_menu()
{
    int choice,option,input;

    while(true)
    {
        cout<<"Enter"<<endl<<"1. Add Vehicle"<<endl<<"2. Delete Vehicle"<<endl<<"3. Search Vehicle"<<endl<<"4. Display Vehicles"<<endl<<"5. Book Vehicle"<<endl;
        cout<<"6. Return Vehicle"<<endl<<"7. Update Vehicle Price"<<endl<<"8. View Customers Record"<<endl<<"9. LOGOUT"<<endl;;
        cin>>choice;
        switch(choice)
        {
        case ADD_VEHICLE:{
            cout<<"Enter"<<endl<<"1. Add Bike"<<endl<<"2. Add Car"<<endl<<"Any Other number to exit"<<endl;
            cin>>option;
            switch(option)
            {
            case Add_Bike:
            {
                this->addBike();
            }
            break;
            case Add_Car:
            {
                this->addCar();
            }
            break;
            default:
                cout<<"Invalid input"<<endl;
            }
        }
        break;
        case DELETE_VEHICLE:{
            cout<<"Enter"<<endl<<"1. Delete Bike"<<endl<<"2. Delete Car"<<endl<<"Any Other number to exit"<<endl;
            cin>>option;
            switch(option)
            {
            case Delete_Bike:
            {
                this->deleteBike();
            }
            break;
            case Delete_Car:
            {
                this->deleteCar();
            }
            break;
            default:
                cout<<"Invalid input"<<endl;
            }
        }
        break;
        case SEARCH_VEHICLE:{
            cout<<"Enter"<<endl<<"1. Search Bike"<<endl<<"2. Search Car"<<endl<<"Any Other number to exit"<<endl;
            cin>>option;
            switch(option)
            {
            case Search_Bike:
            {
                this->searchBike();
            }
            break;
            case Search_Car:
            {
                this->searchCar();
            }
            break;
            default:
                cout<<"Invalid input"<<endl;
            }
        }
        break;
        case DISPLAY_VEHICLES:
        {
            int True = 1;
            cout<<"Enter"<<endl<<"1.Display Bike Details"<<endl<<"2. Display Car details"<<endl<<"Any Other number to exit"<<endl;
            cin>>option;
            switch(option)
            {
            case DISPLAY_BIKE:
            {
                while(True)
                {
                    cout<<"Enter"<<endl<<"1.Display Bike Details"<<endl<<"2. Sort By price"<<endl<<"3. Sort BY Name"<<endl<<"4. Sort by Status"<<endl<<"Any Other number to exit"<<endl;
                    cin>>input;
                    switch(input)
                    {
                    case Display_Bike:
                    {
                        this->displayBikeList();
                    }
                    break;
                    case Sort_By_Price:
                    {
                        this->sortByBikePrice();
                        this->displayBikeList();
                    }
                    break;
                    case Sort_By_Name:
                    {
                        this->sortByBikeName();
                        this->displayBikeList();

                    }
                    break;
                    case Sort_By_Status:
                    {
                        this->sortByBikeStatus();
                        this->displayBikeList();

                    }
                    break;
                    default:
                        cout<<"Invalid input"<<endl;
                        True = 0;
                    }
                }
            }
            break;
            case DISPLAY_CAR:
            {
                while(True)
                {
                    cout<<"Enter"<<endl<<"1.Display Car Details"<<endl<<"2. Sort By price"<<endl<<"3. Sort BY Name"<<endl<<"4. Sort by Status"<<endl<<"Any Other number to exit"<<endl;
                    cin>>input;
                    switch(input)
                    {
                    case DisplayCar:
                    {
                        this->displayCarList();
                    }
                    break;
                    case SortByPrice:
                    {
                        this->sortByCarPrice();
                        this->displayCarList();

                    }
                    break;
                    case SortByName:
                    {
                        this->sortByCarName();
                        this->displayCarList();

                    }
                    break;
                    case SortByStatus:
                    {
                        this->sortByCarStatus();
                        this->displayCarList();

                    }
                    break;
                    default:
                        cout<<"Invalid input"<<endl;
                        True = 0;
                    }
                }

            }

            }

        }
        break;
        case BOOK_VEHICLE:
        {
            cout<<"Enter"<<endl<<"1. Book Bike"<<endl<<"2. Book Car"<<endl<<"Any Other number to exit"<<endl;
            cin>>option;
            switch(option)
            {
            case Book_Bike:
            {
                this->bookBike();
            }
            break;
            case Book_Car:
            {
                this->bookCar();
            }
            break;
            default:
                cout<<"Invalid input"<<endl;
            }
        }
        break;
        case RETURN_VEHICLE:
        {
            cout<<"Enter"<<endl<<"1. Return Bike"<<endl<<"2. Return Car"<<endl<<"Any Other number to exit"<<endl;
            cin>>option;
            switch(option)
            {
            case Return_Bike:
            {
                this->returnBike();
                this->displayCustomerList();
            }
            break;
            case Return_Car:
            {
                this->returnCar();
                this->displayCustomerList();
            }
            break;
            default:
                cout<<"Invalid input"<<endl;
            }
        }
        break;
        case UPDATE_VEHICLE_PRICE:
        {
            cout<<"Enter"<<endl<<"1. Update Bike Price"<<endl<<"2. Update Car Price"<<endl<<"Any Other number to exit"<<endl;
            cin>>option;
            switch(option)
            {
            case Update_Bike_price:
            {
                this->updateBikeCost();
            }
            break;
            case Update_Car_price:
            {
                this->updateCarCost();
            }
            break;
            default:
                cout<<"Invalid input"<<endl;
            }
        }
        break;
        case CUSTOMER_RECORD:
        {
            this->displayCustomerList();
        }
        break;
        case LOGOUT:
        {
            this->writeDataToFile();
            exit(0);
        }
        default:
            cout<<"Invalid input"<<endl;

        }
    }

    return 0;
}

void Vehicle_Manager::addBike()
{
    string bikeName,Bikestatus,bikeNumber;
    int Bikeduration;
    float Bikecost;

    while(true)
    {
        cout<<"Enter Bike Name"<<endl;
        cin>>bikeName;
        if(bikeName.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter Bike Number"<<endl;
        cin>>bikeNumber;
        if(bikeNumber.length() > 10)
        {
            cout<<"Please enter maximum 10 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter  Bike status"<<endl;
        cin>>Bikestatus;
        if(Bikestatus.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"Enter Bike cost per day"<<endl;
    cin>>Bikecost;
    m_bikelist.push_back(new Bike(bikeName, bikeNumber, Bikecost, Bikestatus));

}

void Vehicle_Manager::addCar()
{
    string carName,Carstatus,carNumber;
    int Carduration;
    float Carcost;

    while(true)
    {
        cout<<"Enter Car Name"<<endl;
        cin>>carName;
        if(carName.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter Car Number"<<endl;
        cin>>carNumber;
        if(carNumber.length() > 10)
        {
            cout<<"Please enter maximum 10 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter  Car status"<<endl;
        cin>>Carstatus;
        if(Carstatus.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"Enter Car cost per day"<<endl;
    cin>>Carcost;
    m_carlist.push_back(new Car(carName,carNumber,Carcost, Carstatus));
}

void Vehicle_Manager::deleteBike()
{
    string bikeName,bikeNumber;
    int bikeFound = 0;
    while(true)
    {
        cout<<"Enter Bike Name"<<endl;
        cin>>bikeName;
        if(bikeName.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter Bike Number"<<endl;
        cin>>bikeNumber;
        if(bikeNumber.length() > 10)
        {
            cout<<"Please enter maximum 10 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    for(auto* bike:m_bikelist)
    {
        cout<<bike->getVehicleNum()<<" "<<bikeNumber<<" "<<bike->getName()<<" "<<bikeName<<" "<<bike->getStatus()<<endl;
        if((bikeNumber == bike->getVehicleNum()) && (bikeName == bike->getName()) )
        {
            cout<<bike->getVehicleNum()<<" "<<bikeNumber<<" "<<bike->getName()<<" "<<bikeName<<" "<<bike->getStatus()<<endl;
            if("Available" == bike->getStatus() || "Booked" == bike->getStatus())
            {
                bike->setStatus("Deleted");
                cout<<bikeName<<" with "<<bikeNumber<<" deleted "<<endl;
            }
            bikeFound++;
        }
    }
    if(bikeFound == 0)
    {
        cout<<bikeName<<" with "<<bikeNumber<<" not found"<<endl;
    }
}

void Vehicle_Manager::deleteCar()
{
    string carName,carNumber;
    int carFound = 0;
    while(true)
    {
        cout<<"Enter Car Name"<<endl;
        cin>>carName;
        if(carName.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter Car Number"<<endl;
        cin>>carNumber;
        if(carNumber.length() > 10)
        {
            cout<<"Please enter maximum 10 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    for(auto* car:m_carlist)
    {
        if((carNumber == car->getVehicleNum()) && (carName == car->getName()) )
        {
            if("Available" == car->getStatus()|| "Booked" == car->getStatus())
            {
                car->setStatus("Deleted");
                cout<<carName<<" with "<<carNumber<<" deleted "<<endl;
            }
            carFound++;
        }
    }
    if(carFound == 0)
    {
        cout<<carName<<" with "<<carNumber<<" not found"<<endl;
    }
}

void Vehicle_Manager::searchBike()
{
    string bikeName,bikeNumber;
    int bikeFound = 0;
    while(true)
    {
        cout<<"Enter Bike Name"<<endl;
        cin>>bikeName;
        if(bikeName.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter Bike Number"<<endl;
        cin>>bikeNumber;
        if(bikeNumber.length() > 10)
        {
            cout<<"Please enter maximum 10 Characters"<<endl;
        }
        else
        {
            break;
        }
    }

    for(auto* bike:m_bikelist)
    {
        if(bikeName == bike->getName() && bikeNumber == bike->getVehicleNum())
        {
            cout<<"bikeName";
            cout.width(20);
            cout<<"bikeNumber";
            cout.width(20);
            cout<<"BikeCost";
            cout.width(20);
            cout<<"BikeStatus"<<endl;
            cout<<bike->getName();
            cout.width(20);
            cout<<bike->getVehicleNum();
            cout.width(21);
            cout<<bike->getCost();
            cout.width(24);
            cout<<bike->getStatus()<<endl;
            bikeFound++;
        }
    }
    if(bikeFound == 0)
    {
        cout<<bikeName<<" with "<<bikeNumber<<" not found"<<endl;
    }
}

void Vehicle_Manager::searchCar()
{
    string carName,carNumber;
    int carFound = 0;
    while(true)
    {
        cout<<"Enter Bike Name"<<endl;
        cin>>carName;
        if(carName.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter Bike Number"<<endl;
        cin>>carNumber;
        if(carNumber.length() > 10)
        {
            cout<<"Please enter maximum 10 Characters"<<endl;
        }
        else
        {
            break;
        }
    }

    for(auto* car:m_carlist)
    {
        if(carName == car->getName() && carNumber == car->getVehicleNum())
        {
            cout<<"carName";
            cout.width(20);
            cout<<"carNumber";
            cout.width(20);
            cout<<"CarCost";
            cout.width(20);
            cout<<"CarStatus"<<endl;
            cout<<car->getName();
            cout.width(20);
            cout<<car->getVehicleNum();
            cout.width(21);
            cout<<car->getCost();
            cout.width(24);
            cout<<car->getStatus()<<endl;
            carFound++;
        }
    }
    if(carFound == 0)
    {
        cout<<carName<<" with "<<carNumber<<" not found"<<endl;
    }
}

void Vehicle_Manager::sortByCarPrice()
{
    for(auto* i:m_carlist)
    {
        for(auto* j:m_carlist)
        {
            if(j->getCost() > i->getCost())
            {
                iter_swap(i,j);
            }
        }
    }
}

void Vehicle_Manager::sortByCarName()
{
    for(auto* i:m_carlist)
    {
        for(auto* j:m_carlist)
        {
            if(j->getName() > i->getName())
            {
                iter_swap(i,j);
            }
        }
    }
}

void Vehicle_Manager::sortByCarStatus()
{
    for(auto* i:m_carlist)
    {
        for(auto* j:m_carlist)
        {
            if(j->getStatus() > i->getStatus())
            {
                iter_swap(i,j);
            }
        }
    }
}

void Vehicle_Manager::sortByBikePrice()
{
    cout<<"HII"<<endl;
    for(auto* i:m_bikelist)
    {
        for(auto* j:m_bikelist)
        {
            if(j->getCost() > j->getCost())
            {
                iter_swap(i,j);
            }
        }
    }
}

void Vehicle_Manager::sortByBikeName()
{
    for(auto* i:m_bikelist)
    {
        for(auto* j:m_bikelist)
        {
            if(j->getName() > i->getName())
            {
                iter_swap(i,j);
            }
        }
    }
}

void Vehicle_Manager::sortByBikeStatus()
{
    for(auto* i:m_bikelist)
    {
        for(auto* j:m_bikelist)
        {
            if(j->getStatus() > i->getStatus())
            {
                iter_swap(i,j);
            }
        }
    }
}

void Vehicle_Manager::addCustomer(string vehicleName,string vehicleStatus,float vehicleCost,string vehicleNumber)
{
    string cusName,paymentMode,vehicleType,cusVehicleStatus,upiID,cashID = "A",paymentStatus;
    int bookingID,choice;
    int rentalDuration,cashTransactionID = 0;
    static int UPItransactionID = 1000;
    float amountPaid,balanceAmount = 0;
    cusVehicleStatus = vehicleStatus;
    while(true)
    {
        cout<<"Enter Customer Name"<<endl;
        cin>>cusName;
        if(cusName.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"Enter BookingID"<<endl;
    cin>>bookingID;
    while(true)
    {
        cout<<"Enter Vehicle Type"<<endl;
        cin>>vehicleType;
        if(vehicleType.length() > 15)
        {
            cout<<"Please enter maximum 15 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"Enter Rental duration"<<endl;
    cin>>rentalDuration;
    if(rentalDuration > 5)
    {
        cout<<"Maximum rental duration is 5 days"<<endl;
    }
    cout<<"Enter Payment mode"<<endl;
    cout<<"Enter"<<endl<<"1. Cash"<<endl<<"2. UPI"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        paymentMode = "Cash";
        cout<<"Pay "<<vehicleCost*rentalDuration<<" ruppees"<<endl;
        cout<<"Enter Amount"<<endl;
        cin>>amountPaid;
        cout<<"Amount of rupees "<<amountPaid<<" recieved through "<<paymentMode<<endl;
        paymentStatus = "Success";
        cout<<"payment "<<paymentStatus;
        if(amountPaid < vehicleCost*rentalDuration)
        {
            balanceAmount = (vehicleCost*rentalDuration) - amountPaid;
            cout<<"Balance Amount : "<<balanceAmount<<endl;
        }

    }
    else if (choice == 2)
    {
        paymentMode = "UPI";
        cout<<"Enter UPI ID"<<endl;
        cin>>upiID;
        cout<<"Pay "<<vehicleCost*rentalDuration<<" ruppees"<<endl;
        cout<<"Enter Amount"<<endl;
        cin>>amountPaid;
        if(amountPaid == vehicleCost*rentalDuration)
        {
            cout<<"Amount of rupees "<<amountPaid<<" recieved through"<<paymentMode<<endl;
            paymentStatus = "Success";
            cout<<"payment "<<paymentStatus<<endl;
            cout<<"Transaction successfull"<<endl;
            cout<<"Transaction ID :"<<++UPItransactionID<<endl;
        }
        else
        {
            paymentStatus = "Pending";
            cout<<"payment "<<paymentStatus<<endl;
        }
        if(amountPaid < vehicleCost*rentalDuration)
        {
            balanceAmount =(vehicleCost*rentalDuration) - amountPaid;
            cout<<"Balance Amount : "<<balanceAmount<<endl;
        }

    }
    else
    {
        cout<<"Invalid input"<<endl;
    }

    if(vehicleType == "Bike")
    {
        m_vehicle = new Bike(vehicleName, vehicleNumber, vehicleCost, vehicleStatus);
        if("UPI" == paymentMode)
        {
            m_payMode = new UPI(upiID,UPItransactionID,paymentStatus);
            m_customerlist.push_back(new Rental_Customer_details(cusName, bookingID, m_vehicle,m_payMode,cusVehicleStatus,vehicleType,rentalDuration,paymentMode,amountPaid,balanceAmount));
        }
        else if("Cash" == paymentMode)
        {
            m_payMode = new Cash(cashID,cashTransactionID,paymentStatus);
            m_customerlist.push_back(new Rental_Customer_details(cusName, bookingID, m_vehicle,m_payMode, cusVehicleStatus, vehicleType, rentalDuration, paymentMode,amountPaid,balanceAmount));
        }
    }
    else if(vehicleType == "Car")
    {
        m_vehicle = new Car(vehicleName,vehicleNumber,vehicleCost,vehicleStatus);
        if("UPI" == paymentMode)
        {
            m_payMode = new UPI(upiID,UPItransactionID,paymentStatus);
            m_customerlist.push_back(new Rental_Customer_details(cusName, bookingID, m_vehicle,m_payMode,cusVehicleStatus,vehicleType,rentalDuration,paymentMode,amountPaid,balanceAmount));
        }
        else if("Cash" == paymentMode)
        {
            m_payMode = new Cash(cashID,cashTransactionID,paymentStatus);
            m_customerlist.push_back(new Rental_Customer_details(cusName, bookingID, m_vehicle,m_payMode, cusVehicleStatus, vehicleType, rentalDuration, paymentMode,amountPaid,balanceAmount));
        }
    }
}

void Vehicle_Manager::writeDataToFile()
{
    m_bikeFO->writeData(m_bikelist);
    m_carFO->writeData(m_carlist);
    m_cusFO->writeData(m_customerlist);
}

void Vehicle_Manager::bookBike()
{
    string bikeName, bikeNumber;
    int bikeFound = 0;
    cout<<"Enter name of bike to book"<<endl;
    cin>>bikeName;
    cin.ignore();
    cout<<"Enter Bike number"<<endl;
    cin>>bikeNumber;

    for(auto* bike:m_bikelist)
    {
        if((bikeNumber == bike->getVehicleNum()) && (bikeName == bike->getName()) )
        {
            if("Available" == bike->getStatus())
            {
                bike->setStatus("Booked");
                cout<<bikeName<<" bike is Booked"<<endl;
                this->addCustomer(bike->getName(),bike->getStatus(),bike->getCost(),bike->getVehicleNum());
            }
            else if("Booked" == bike->getStatus())
            {
                cout<<bikeName<<" bike is already Booked"<<endl;
            }
            bikeFound++;
        }
    }
    if(bikeFound == 0)
    {
        cout<<bikeName<<" with "<<bikeNumber<<" not found"<<endl;
    }
}

void Vehicle_Manager::bookCar()
{
    string carName,carNumber;
    int carFound = 0;
    cout<<"Enter name of car to book"<<endl;
    cin>>carName;
    cout<<"Enter Car number"<<endl;
    cin>>carNumber;
    for(auto* car:m_carlist)
    {
        if(car->getName() == carName && car->getVehicleNum() == carNumber)
        {
            if(car->getStatus() == "Available")
            {
                car->setStatus("Booked");
                cout<<carName<<" Car is Booked"<<endl;
                this->addCustomer(car->getName(),car->getStatus(),car->getCost(),car->getVehicleNum());
            }
            else if("Booked" == car->getStatus())
            {
                cout<<carName<<" car is already Booked"<<endl;
            }
            carFound++;
        }
    }
    if(carFound == 0)
    {
        cout<<carName<<" with "<<carNumber<<" not found"<<endl;
    }
}

void Vehicle_Manager::returnBike()
{
    string bikeName,bikeNumber;
    int success = 0;
    cout<<"Enter name of Bike to return"<<endl;
    cin>>bikeName;
    cout<<"Enter Bike number"<<endl;
    cin>>bikeNumber;
    for(auto* bike:m_bikelist)
    {
        if(bike->getName() == bikeName && bike->getVehicleNum() == bikeNumber)
        {
            if(bike->getStatus() == "Booked")
            {
                for(auto* customer:m_customerlist)
                {
                    if(bikeNumber == customer->getVehicleNum() &&  "Booked" == customer->getVehicleStatus())
                    {
                        if(customer->getBalanceAmount() == 0)
                        {
                            cout<<bikeName<<" Bike is returned"<<endl;
                            customer->setVehicleStatus("Returned");
                        }
                        else
                        {
                            cout<<"Please pay balance Amount of "<<customer->getBalanceAmount()<<" rupees"<<endl;
                            success = this->payment(customer->getBalanceAmount());
                            if(success)
                            {
                                customer->setAmountPaid(customer->getAmountPaid()+customer->getBalanceAmount());
                                customer->setBalanceAmount(0);
                                cout<<bikeName<<" Bike is returned"<<endl;
                                customer->setVehicleStatus("Returned");
                                customer->setPaymentStatus("Success");
                            }

                        }
                    }

                }
                bike->setStatus("Available");
            }
        }
    }
}

void Vehicle_Manager::returnCar()
{
    string carName,carNumber;
    int success = 0;
    cout<<"Enter name of car to return"<<endl;
    cin>>carName;
    cout<<"Enter Car number"<<endl;
    cin>>carNumber;
    for(auto car:m_carlist)
    {
        if(car->getName() == carName && car->getVehicleNum() == carNumber)
        {
            if(car->getStatus() == "Booked")
            {
                for(auto* customer:m_customerlist)
                {
                    if(carNumber == customer->getVehicleNum() &&  "Booked" == customer->getVehicleStatus())
                    {
                        if(customer->getBalanceAmount() == 0)
                        {
                            cout<<carName<<" Car is returned"<<endl;
                            customer->setVehicleStatus("Returned");
                        }
                        else
                        {
                            cout<<"Please pay balance Amount of "<<customer->getBalanceAmount()<<" rupees"<<endl;
                            success = this->payment(customer->getBalanceAmount());
                            if(success)
                            {
                                customer->setAmountPaid(customer->getAmountPaid()+customer->getBalanceAmount());
                                customer->setBalanceAmount(0);
                                cout<<carName<<" Car is returned"<<endl;
                                customer->setVehicleStatus("Returned");
                                customer->setPaymentStatus("Success");
                            }

                        }
                    }

                }
                car->setStatus("Available");
            }

        }
    }
}

void Vehicle_Manager::displayBikeList()
{
    cout<<"bikeName";
    cout.width(20);
    cout<<"bikeNumber";
    cout.width(20);
    cout<<"BikeCost";
    cout.width(20);
    cout<<"BikeStatus"<<endl;

    for(auto* bike:m_bikelist)
    {
        if("Available" == bike->getStatus() || "Booked" == bike->getStatus())
        {
            cout<<bike->getName();
            cout.width(20);
            cout<<bike->getVehicleNum();
            cout.width(21);
            cout<<bike->getCost();
            cout.width(24);
            cout<<bike->getStatus()<<endl;
        }
    }
}

void Vehicle_Manager::displayCarList()
{
    cout<<"carName";
    cout.width(20);
    cout<<"carNumber";
    cout.width(20);
    cout<<"CarCost";
    cout.width(20);
    cout<<"CarStatus"<<endl;

    for(auto* car:m_carlist)
    {
        if("Available" == car->getStatus() || "Booked" == car->getStatus())
        {
            cout<<car->getName();
            cout.width(20);
            cout<<car->getVehicleNum();
            cout.width(21);
            cout<<car->getCost();
            cout.width(24);
            cout<<car->getStatus()<<endl;
        }
    }
}

void Vehicle_Manager::displayCustomerList()
{
    cout<<"CustomerName";
    cout.width(12);
    cout<<"BookingID";
    cout.width(12);
    cout<<"VehicleName";
    cout.width(12);
    cout<<"VehicleNum";
    cout.width(12);
    cout<<"RentalDuration";
    cout.width(12);
    cout<<"PaymentMode";
    cout.width(12);
    cout<<"paymentID";
    cout.width(12);
    cout<<"TransactionID";
    cout.width(12);
    cout<<"VehicleStatus";
    cout.width(12);
    cout<<"AmountPaid";
    cout.width(12);
    cout<<"DueAmount";
    cout.width(12);
    cout<<"PaymentStatus"<<endl;

    for(auto* i:m_customerlist)
    {
        cout<<i->getCusName();
        cout.width(12);
        cout<<i->getBookingID();
        cout.width(12);
        cout<<i->getVehicleName();
        cout.width(12);
        cout<<i->getVehicleNum();
        cout.width(12);
        cout<<i->getRentalDuration();
        cout.width(12);
        cout<<i->getIsAmountPaid();
        cout.width(12);
        cout<<i->getID();
        cout.width(12);
        cout<<i->getTransactionID();
        cout.width(12);
        cout<<i->getVehicleStatus();
        cout.width(12);
        cout<<i->getAmountPaid();
        cout.width(12);
        cout<<i->getBalanceAmount();
        cout.width(12);
        cout<<i->getpaymentStatus()<<endl;
    }
}

void Vehicle_Manager::updateBikeCost()
{
    float bikeNewAmount;
    string bikeNumber, bikeName;
    cout<<"Enter vehicle name to update price"<<endl;
    cin>>bikeName;
    cout<<"Enter vehicle number to update price"<<endl;
    cin>>bikeNumber;
    cout<<"Enter updated bike cost"<<endl;
    cin>>bikeNewAmount;
    for(auto* bike:m_bikelist)
    {
        if(bike->getVehicleNum() == bikeNumber)
        {
            bike->setCost(bikeNewAmount);
            cout<<bikeName<<" with vehicle number"<<bikeNumber<<"updated"<<endl;
        }
    }
}

void Vehicle_Manager::updateCarCost()
{
    float CarnewAmount;
    string carNumber, carName;
    cout<<"Enter vehicle name to update price"<<endl;
    cin>>carName;
    cout<<"Enter vehicle number to update price"<<endl;
    cin>>carNumber;
    cout<<"Enter updated bike cost"<<endl;
    cin>>CarnewAmount;
    for(auto* car:m_carlist)
    {
        if(car->getName() == carName && car->getVehicleNum() == carNumber)
        {
            car->setCost(CarnewAmount);
            cout<<carName<<" with vehicle number"<<carNumber<<"updated"<<endl;
        }
    }
}

int Vehicle_Manager::payment(float balanceAmount)
{
    int choice,success = 0;
    string paymentMode;
    float amountPaid;
    cout<<"Enter Payment mode"<<endl;
    cout<<"Enter"<<endl<<"1. Cash"<<endl<<"2. UPI"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        paymentMode = "Cash";
        cout<<"Pay "<<balanceAmount<<" ruppees"<<endl;
        cout<<"Enter Amount"<<endl;
        cin>>amountPaid;
        if(amountPaid == balanceAmount)
        {
            cout<<"Amount of rupees "<<amountPaid<<" recieved through "<<paymentMode<<endl;
            success = 1;
        }

    }
    else if (choice == 2)
    {
        string upiID;
        int transactionID = 2000;
        paymentMode = "UPI";
        cout<<"Enter UPI ID"<<endl;
        cin>>upiID;
        cout<<"Pay "<<balanceAmount<<" ruppees"<<endl;
        cout<<"Enter Amount"<<endl;
        cin>>amountPaid;
        if(amountPaid  == balanceAmount)
        {
            cout<<"Amount of rupees "<<amountPaid<<" recieved through"<<paymentMode<<endl;
            cout<<"Transaction successfull"<<endl;
            cout<<"Transaction ID :"<<++transactionID<<endl;
            success = 1;
        }
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    return success;

}

