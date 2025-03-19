#include "Vehicle_Manager.h"
#include "Bike_FileOperation.h"
#include "Car_FileOperation.h"
#include "Customer_FileOperation.h"
#include "Rental_Customer_details.h"
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
    for(auto *i : m_bikelist)
    {
        delete i;
    }
    for(auto *i : m_carlist)
    {
        delete i;
    }
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
                this->displayBikeList();
                this->displayCustomerList();
            }
            break;
            case Return_Car:
            {
                this->returnCar();
                this->displayBikeList();
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
    for(auto* i:m_bikelist)
    {
        cout<<i->getVehicleNum()<<" "<<bikeNumber<<" "<<i->getName()<<" "<<bikeName<<" "<<i->getStatus()<<endl;
        if((bikeNumber == i->getVehicleNum()) && (bikeName == i->getName()) )
        {
            cout<<i->getVehicleNum()<<" "<<bikeNumber<<" "<<i->getName()<<" "<<bikeName<<" "<<i->getStatus()<<endl;
            if("Available" == i->getStatus() || "Booked" == i->getStatus())
            {
                i->setStatus("Deleted");
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
    for(auto* i:m_carlist)
    {
        if((carNumber == i->getVehicleNum()) && (carName == i->getName()) )
        {
            if("Available" == i->getStatus()|| "Booked" == i->getStatus())
            {
                i->setStatus("Deleted");
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

    for(auto* i:m_bikelist)
    {
        if(bikeName == i->getName() && bikeNumber == i->getVehicleNum())
        {
            cout<<"bikeName";
            cout.width(20);
            cout<<"bikeNumber";
            cout.width(20);
            cout<<"BikeCost";
            cout.width(20);
            cout<<"BikeStatus"<<endl;
            cout<<i->getName();
            cout.width(20);
            cout<<i->getVehicleNum();
            cout.width(21);
            cout<<i->getCost();
            cout.width(24);
            cout<<i->getStatus()<<endl;
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

    for(auto* i:m_carlist)
    {
        if(carName == i->getName() && carNumber == i->getVehicleNum())
        {
            cout<<"carName";
            cout.width(20);
            cout<<"carNumber";
            cout.width(20);
            cout<<"CarCost";
            cout.width(20);
            cout<<"CarStatus"<<endl;
            cout<<i->getName();
            cout.width(20);
            cout<<i->getVehicleNum();
            cout.width(21);
            cout<<i->getCost();
            cout.width(24);
            cout<<i->getStatus()<<endl;
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
            if(j->getCost() > i->getCost())
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
    string cusName,paymentMode,vehicleType,cusVehicleStatus,upiID;
    int bookingID,choice;
    int rentalDuration,transactionID = 1000;
    float amount,amountPaid,balanceAmount;
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
        cin>>amount;
        amountPaid = amount;
        cout<<"Amount of rupees "<<amount<<" recieved through "<<paymentMode<<endl;
        if(amount < vehicleCost*rentalDuration)
        {
            balanceAmount = (vehicleCost*rentalDuration) - amount;
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
        cin>>amount;
        if(upiID == cusName && amount > 0)
        {
            cout<<"Amount of rupees "<<amount<<" recieved through"<<paymentMode<<endl;
            cout<<"Transaction successfull"<<endl;
            cout<<"Transaction ID :"<<++transactionID<<endl;
        }
        if(amount < vehicleCost*rentalDuration)
        {
            balanceAmount =(vehicleCost*rentalDuration) - amount;
            cout<<"Balance Amount : "<<balanceAmount<<endl;
        }
        amountPaid = amount;

    }
    else
    {
        cout<<"Invalid input"<<endl;
    }

    if(vehicleType == "Bike")
    {
        Bike* bike = new Bike(vehicleName, vehicleNumber, vehicleCost, vehicleStatus);
        m_customerlist.push_back(new Rental_Customer_details(cusName, bookingID, bike,cusVehicleStatus,vehicleType,rentalDuration,paymentMode,amountPaid,balanceAmount));
    }
    else if(vehicleType == "Car")
    {
        Car* car = new Car(vehicleName,vehicleNumber,vehicleCost,vehicleStatus);
        m_customerlist.push_back(new Rental_Customer_details(cusName, bookingID, car, cusVehicleStatus, vehicleType, rentalDuration, paymentMode,amountPaid,balanceAmount));
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

    for(auto* i:m_bikelist)
    {
        if((bikeNumber == i->getVehicleNum()) && (bikeName == i->getName()) )
        {
            if("Available" == i->getStatus())
            {
                i->setStatus("Booked");
                cout<<bikeName<<" bike is Booked"<<endl;
                this->addCustomer(i->getName(),i->getStatus(),i->getCost(),i->getVehicleNum());
            }
            else if("Booked" == i->getStatus())
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
    for(auto* i:m_carlist)
    {
        if(i->getName() == carName && i->getVehicleNum() == carNumber)
        {
            if(i->getStatus() == "Available")
            {
                i->setStatus("Booked");
                cout<<carName<<" Car is Booked"<<endl;
                this->addCustomer(i->getName(),i->getStatus(),i->getCost(),i->getVehicleNum());
            }
            else if("Booked" == i->getStatus())
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
    cout<<"Enter name of Bike to return"<<endl;
    cin>>bikeName;
    cout<<"Enter Bike number"<<endl;
    cin>>bikeNumber;
    for(auto* i:m_bikelist)
    {
        cout<<i->getVehicleNum()<<bikeNumber<<endl;
        if(i->getName() == bikeName && i->getVehicleNum() == bikeNumber)
        {
            if(i->getStatus() == "Booked")
            {
                for(auto* i:m_customerlist)
                {
                    if(bikeNumber == i->getVehicleNum() &&  "Booked" == i->getVehicleStatus())
                    {
                        if(i->getBalanceAmount() == NULL)
                        {
                            cout<<bikeName<<" Bike is returned"<<endl;
                            i->setVehicleStatus("Returned");
                        }
                        else
                        {
                            cout<<"Please pay balance Amount of "<<i->getBalanceAmount()<<"rupees"<<endl;
                        }
                    }

                }
                i->setStatus("Available");
                cout<<bikeName<<" Bike is returned"<<endl;
            }
        }
    }
}

void Vehicle_Manager::returnCar()
{
    string carName,carNumber;
    cout<<"Enter name of car to return"<<endl;
    cin>>carName;
    cout<<"Enter Car number"<<endl;
    cin>>carNumber;
    for(auto i:m_carlist)
    {
        cout<<i->getVehicleNum()<<carNumber<<endl;
        if(i->getName() == carName && i->getVehicleNum() == carNumber)
        {
            if(i->getStatus() == "Booked")
            {
                i->setStatus("Available");
                cout<<carName<<" Car is returned"<<endl;
                for(auto i:m_customerlist)
                {
                    if(i->getVehicleNum() == carNumber && i->getVehicleStatus() == "Booked")
                    {
                        i->setVehicleStatus("Returned");
                    }
                }

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

    for(auto* i:m_bikelist)
    {
        if("Available" == i->getStatus() || "Booked" == i->getStatus())
        {
            cout<<i->getName();
            cout.width(20);
            cout<<i->getVehicleNum();
            cout.width(21);
            cout<<i->getCost();
            cout.width(24);
            cout<<i->getStatus()<<endl;
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

    for(auto* i:m_carlist)
    {
        if("Available" == i->getStatus() || "Booked" == i->getStatus())
        {
            cout<<i->getName();
            cout.width(20);
            cout<<i->getVehicleNum();
            cout.width(21);
            cout<<i->getCost();
            cout.width(24);
            cout<<i->getStatus()<<endl;
        }
    }
}

void Vehicle_Manager::displayCustomerList()
{
    cout<<"CustomerName";
    cout.width(15);
    cout<<"BookingID";
    cout.width(15);
    cout<<"VehicleName";
    cout.width(15);
    cout<<"VehicleNum";
    cout.width(15);
    cout<<"RentalDuration";
    cout.width(15);
    cout<<"AmountStatus";
    cout.width(15);
    cout<<"VehicleStatus";
    cout.width(15);
    cout<<"AmountPaid";
    cout.width(15);
    cout<<"BalanceAmount"<<endl;

    for(auto* i:m_customerlist)
    {
        cout<<i->getCusName();
        cout.width(15);
        cout<<i->getBookingID();
        cout.width(15);
        cout<<i->getVehicleName();
        cout.width(15);
        cout<<i->getVehicleNum();
        cout.width(15);
        cout<<i->getRentalDuration();
        cout.width(15);
        cout<<i->getIsAmountPaid();
        cout.width(15);
        cout<<i->getVehicleStatus();
        cout.width(15);
        cout<<i->getAmountPaid()<<endl;
        cout.width(15);
        cout<<i->getBalanceAmount()<<endl;
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
    for(auto* i:m_bikelist)
    {
        if(i->getVehicleNum() == bikeNumber)
        {
            i->setCost(bikeNewAmount);
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
    for(auto* i:m_carlist)
    {
        if(i->getName() == carName && i->getVehicleNum() == carNumber)
        {
            i->setCost(CarnewAmount);
            cout<<carName<<" with vehicle number"<<carNumber<<"updated"<<endl;
        }
    }
}

