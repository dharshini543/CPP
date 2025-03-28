#include "Bike_FileOperation.h"
#include <iostream>
#include<fstream>

Bike_FO::Bike_FO()
{
    cout<<"Bike File operations Constructor"<<endl;
}

Bike_FO::Bike_FO(const Bike_FO &bike)
{
    cout<< "Bike File operations Copy constructor called"<<endl;
}

Bike_FO::~Bike_FO()
{
    cout<<"Bike File operations Destructor"<<endl;
}

Bike_FO Bike_FO::operator =(Bike_FO &bike)
{
    cout<< "Bike File operations assignment operator"<<endl;
    return bike;

}

void Bike_FO::writeData(list<RentalBikeDetails*> bikeList)
{
    ofstream file("bike.csv");
    if (!file)
    {
        cout << "Error opening Bike  file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Model       "<<"Number           "<<"Cost          "<<"Status"<<endl;
    for(auto bike:bikeList)
    {
        file<<bike->getVehicleName()<<","<<bike->getVehicleModel()<<","<<bike->getVehicleNumber()<<","<<bike->getVehicleCost()<<","<<bike->getVehicleStatus()<<endl;
    }
    cout<<"Data written to Bike file"<<endl;
    file.close();
}

list<RentalBikeDetails*> Bike_FO::readData()
{
    list<RentalBikeDetails*> bikeList;
    ifstream file("bike.csv");
    if (!file)
    {
        cout << "Error opening Bike file for reading!" << endl;
        return bikeList;
    }

    string line, bikeName, bikeStatus, bikeNumber, bikeModel;
    float bikeCost;

    getline(file, line);
    while (getline(file, bikeName, ',') && getline(file, bikeModel, ',') && getline(file, bikeNumber,',') && file >> bikeCost && file.ignore() && getline(file, bikeStatus))
    {
        bikeList.push_back(new RentalBikeDetails(bikeName, bikeModel, bikeNumber, bikeCost, bikeStatus));
    }

    file.close();
    cout<<"Data read from Bike file"<<endl;

    return bikeList;
}
