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
}

int Vehicle_Manager::main_menu()
{
    int choice,option;

    while(true)
    {
        cout<<"Enter"<<endl<<"1. Add Vehicle"<<endl<<"2. Display Vehicles"<<endl<<"3. Book Vehicle"<<endl;
        cout<<"4. Return Vehicle"<<endl<<"5. Update Vehicle Price"<<endl<<"6. View Customers Record"<<endl<<"7. LOGOUT"<<endl;;
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
        case DISPLAY_VEHICLES:
        {
            cout<<"Enter"<<endl<<"1.Display Bike Details"<<endl<<"2. Display Car details"<<endl<<"Any Other number to exit"<<endl;
            cin>>option;
            switch(option)
            {
            case Display_Bike:
            {
                this->displayBikeList();
            }
            break;
            case Display_Car:
            {
                this->displayCarList();
            }
            break;
            default:
                cout<<"Invalid input"<<endl;
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
            }
            break;
            case Return_Car:
            {
                this->returnCar();
                this->displayBikeList();
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
    string Bikename,Bikestatus,Bikenumber;
    int Bikeduration;
    float Bikecost;

    while(true)
    {
        cout<<"Enter Bike Name"<<endl;
        cin>>Bikename;
        if(Bikename.length() > 15)
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
        cin>>Bikenumber;
        if(Bikenumber.length() > 10)
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
    while(true)
    {
        cout<<"Enter Bike duration"<<endl;
        cin>>Bikeduration;
        if(Bikeduration != 1)
        {
            cout<<"Duration should be 1 day"<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"Enter Bike cost per day"<<endl;
    cin>>Bikecost;
    m_bikelist.push_back(new Bike(Bikename, Bikeduration, Bikenumber, Bikecost, Bikestatus));

}

void Vehicle_Manager::addCar()
{
    string Carname,Carstatus,Carnumber;
    int Carduration;
    float Carcost;

    while(true)
    {
        cout<<"Enter Car Name"<<endl;
        cin>>Carname;
        if(Carname.length() > 15)
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
        cin>>Carnumber;
        if(Carnumber.length() > 10)
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
    while(true)
    {
        cout<<"Enter Car duration"<<endl;
        cin>>Carduration;
        if(Carduration != 1)
        {
            cout<<"Duration should be 1 day"<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"Enter Car cost per day"<<endl;
    cin>>Carcost;
    m_carlist.push_back(new Car(Carname,Carduration, Carnumber,Carcost, Carstatus));
}

void Vehicle_Manager::addCustomer()
{
    string cusName,Vehicle_name,Vehicle_num,isAmountPaid;
    int bookingID;
    int rental_duration;
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
        cout<<"Enter Vehicle Name"<<endl;
        cin>>Vehicle_name;
        if(Vehicle_name.length() > 15)
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
        cout<<"Enter Vehicle Number"<<endl;
        cin>>Vehicle_num;
        if(Vehicle_num.length() > 10)
        {
            cout<<"Please enter maximum 10 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"Enter Rental duration"<<endl;
    cin>>rental_duration;
    if(rental_duration > 5)
    {
        cout<<"Maximum rental duration is 5 days"<<endl;
    }
    while(true)
    {
        cout<<"Enter Amount status"<<endl;
        cin>>isAmountPaid;
        if(isAmountPaid.length() > 10)
        {
            cout<<"Please enter maximum 10 Characters"<<endl;
        }
        else
        {
            break;
        }
    }
    m_customerlist.push_back(new Rental_Customer_details(cusName, bookingID,Vehicle_name, Vehicle_num,rental_duration,isAmountPaid));
}

void Vehicle_Manager::writeDataToFile()
{
    m_bikeFO->writeData(m_bikelist);
    m_carFO->writeData(m_carlist);
    m_cusFO->writeData(m_customerlist);
}

void Vehicle_Manager::bookBike()
{
    string Bikename, Bikenumber;
    int found = 0;
    cout<<"Enter name of bike to book"<<endl;
    cin>>Bikename;
    cin.ignore();
    cout<<"Enter Bike number"<<endl;
    cin>>Bikenumber;

    for(auto* i:m_bikelist)
    {
        if((Bikenumber == i->getVehicleNum()) && (Bikename == i->getName()) )
        {
            if("Available" == i->getStatus())
            {
                i->setStatus("Booked");
                cout<<Bikename<<" bike is Booked"<<endl;
            }
            found++;
        }
    }
    if(found == 0)
    {
        cout<<Bikename<<" with "<<Bikenumber<<" not found"<<endl;
    }
    else
    {
        this->addCustomer();
    }
}

void Vehicle_Manager::bookCar()
{
    string Carname,Carnumber;
    int found = 0;
    cout<<"Enter name of car to book"<<endl;
    cin>>Carname;
    cout<<"Enter Car number"<<endl;
    cin>>Carnumber;
    for(auto* i:m_carlist)
    {
        if(i->getName() == Carname && i->getVehicleNum() == Carnumber)
        {
            if(i->getStatus() == "Available")
            {
                i->setStatus("Booked");
                cout<<Carname<<" Car is Booked"<<endl;
            }
            found++;
        }
    }
    if(found == 0)
    {
        cout<<Carname<<" with "<<Carnumber<<" not found"<<endl;
    }
    else
    {
        this->addCustomer();
    }
}

void Vehicle_Manager::returnBike()
{
    string Bikename,Bikenumber;
    cout<<"Enter name of Bike to return"<<endl;
    cin>>Bikename;
    cout<<"Enter Bike number"<<endl;
    cin>>Bikenumber;
    for(auto* i:m_bikelist)
    {
        cout<<i->getVehicleNum()<<Bikenumber<<endl;
        if(i->getName() == Bikename && i->getVehicleNum() == Bikenumber)
        {
            if(i->getStatus() == "Booked")
            {
                i->setStatus("Available");
                cout<<Bikename<<" Bike is returned"<<endl;
            }
        }
    }
}

void Vehicle_Manager::returnCar()
{
    string Carname,Carnumber;
    cout<<"Enter name of car to return"<<endl;
    cin>>Carname;
    cout<<"Enter Car number"<<endl;
    cin>>Carnumber;
    for(auto i:m_carlist)
    {
        cout<<i->getVehicleNum()<<Carnumber<<endl;
        if(i->getName() == Carname && i->getVehicleNum() == Carnumber)
        {
            if(i->getStatus() == "Booked")
            {
                i->setStatus("Available");
                cout<<Carname<<" Car is returned"<<endl;
            }
        }
    }
}

void Vehicle_Manager::displayBikeList()
{
    cout<<"BikeName";
    cout.width(20);
    cout<<"BikeDuration";
    cout.width(20);
    cout<<"BikeNumber";
    cout.width(20);
    cout<<"BikeCost";
    cout.width(20);
    cout<<"BikeStatus"<<endl;

    for(auto* i:m_bikelist)
    {
        cout<<i->getName();
        cout.width(20);
        cout<<i->getDuration();
        cout.width(20);
        cout<<i->getVehicleNum();
        cout.width(21);
        cout<<i->getCost();
        cout.width(24);
        cout<<i->getStatus()<<endl;
    }
}

void Vehicle_Manager::displayCarList()
{
    cout<<"BikeName";
    cout.width(20);
    cout<<"BikeDuration";
    cout.width(20);
    cout<<"BikeNumber";
    cout.width(20);
    cout<<"BikeCost";
    cout.width(20);
    cout<<"BikeStatus"<<endl;

    for(auto* i:m_carlist)
    {
        cout<<i->getName();
        cout.width(20);
        cout<<i->getDuration();
        cout.width(20);
        cout<<i->getVehicleNum();
        cout.width(21);
        cout<<i->getCost();
        cout.width(24);
        cout<<i->getStatus()<<endl;
    }
}

void Vehicle_Manager::displayCustomerList()
{
    cout<<"CustomerName";
    cout.width(20);
    cout<<"BookingID";
    cout.width(20);
    cout<<"VehicleName";
    cout.width(20);
    cout<<"VehicleNum";
    cout.width(20);
    cout<<"RentalDuration";
    cout.width(20);
    cout<<"AmountStatus"<<endl;

    for(auto* i:m_customerlist)
    {
        cout<<i->getCusName();
        cout.width(20);
        cout<<i->getBookingID();
        cout.width(20);
        cout<<i->getVehicleName();
        cout.width(20);
        cout<<i->getVehicleNum();
        cout.width(20);
        cout<<i->getRentalDuration();
        cout.width(20);
        cout<<i->getIsAmountPaid()<<endl;
    }
}

void Vehicle_Manager::updateBikeCost()
{
    float BikenewAmount;
    string Bikenumber, Bikename;
    cout<<"Enter vehicle name to update price"<<endl;
    cin>>Bikename;
    cout<<"Enter vehicle number to update price"<<endl;
    cin>>Bikenumber;
    cout<<"Enter updated bike cost"<<endl;
    cin>>BikenewAmount;
    for(auto* i:m_bikelist)
    {
        cout<<i->getVehicleNum()<<Bikenumber<<endl;
        if(i->getVehicleNum() == Bikenumber)
        {
            cout<<i->getVehicleNum()<<endl;
            i->setCost(BikenewAmount);
            cout<<Bikename<<" with vehicle number"<<Bikenumber<<"updated"<<endl;
        }
    }
}

void Vehicle_Manager::updateCarCost()
{
    float CarnewAmount;
    string Carnumber, Carname;
    cout<<"Enter vehicle name to update price"<<endl;
    cin>>Carname;
    cout<<"Enter vehicle number to update price"<<endl;
    cin>>Carnumber;
    cout<<"Enter updated bike cost"<<endl;
    cin>>CarnewAmount;
    for(auto* i:m_carlist)
    {
        if(i->getName() == Carname && i->getVehicleNum() == Carnumber)
        {
            i->setCost(CarnewAmount);
            cout<<Carname<<" with vehicle number"<<Carnumber<<"updated"<<endl;
        }
    }
}

