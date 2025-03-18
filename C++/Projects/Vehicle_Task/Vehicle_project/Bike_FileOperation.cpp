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

void Bike_FO::writeData(list<Bike*> bike)
{
    ofstream file("bike.csv");
    if (!file)
    {
        cout << "Error opening Bike  file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Duration           "<<"Number           "<<"Cost          "<<"Status"<<endl;
    for(auto* i:bike)
    {
        file<<i->getName()<<","<<i->getDuration()<<","<<i->getVehicleNum()<<","<<i->getCost()<<","<<i->getStatus()<<endl;
    }
    cout<<"Data written to Bike file"<<endl;
    file.close();
}

list<Bike*> Bike_FO::readData()
{
    list<Bike*> bike;
    ifstream file("bike.csv");
    if (!file)
    {
        cout << "Error opening Bike file for reading!" << endl;
        return bike;
    }

    string line, name, status,number;
    int duration;
    float cost;

    getline(file, line);
    while (getline(file, name, ',') && file >> duration && file.ignore() && getline(file, number,',') && file >> cost && file.ignore() && getline(file, status))
    {
        bike.push_back(new Bike(name, duration, number, cost,status));
    }

    file.close();
    cout<<"Data read from Bike file"<<endl;

    return bike;
}
