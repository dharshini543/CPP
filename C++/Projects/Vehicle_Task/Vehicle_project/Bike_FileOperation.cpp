#include "Bike_FileOperation.h"
#include <iostream>
#include<fstream>

Bike_FO::Bike_FO()
{
    cout<<"Bike File operations Constructor"<<endl;
}

Bike_FO::~Bike_FO()
{
    cout<<"Bike File operations Destructor"<<endl;
}

void Bike_FO::writeData(list<Bike*> bikeList)
{
    ofstream file("bike.csv");
    if (!file)
    {
        cout << "Error opening Bike  file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Number           "<<"Cost          "<<"Status"<<endl;
    for(auto* i:bikeList)
    {
        file<<i->getName()<<","<<i->getVehicleNum()<<","<<i->getCost()<<","<<i->getStatus()<<endl;
    }
    cout<<"Data written to Bike file"<<endl;
    file.close();
}

list<Bike*> Bike_FO::readData()
{
    list<Bike*> bikeList;
    ifstream file("bike.csv");
    if (!file)
    {
        cout << "Error opening Bike file for reading!" << endl;
        return bikeList;
    }

    string line, bikeName, bikeStatus,bikeNumber;
    int bikeDuration;
    float bikeCost;

    getline(file, line);
    while (getline(file, bikeName, ',') && getline(file, bikeNumber,',') && file >> bikeCost && file.ignore() && getline(file, bikeStatus))
    {
        bikeList.push_back(new Bike(bikeName, bikeNumber, bikeCost,bikeStatus));
    }

    file.close();
    cout<<"Data read from Bike file"<<endl;

    return bikeList;
}
