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
    cout<<"Writing Bike data to CSV file"<<endl;
    ofstream file("bike.csv");
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Number           "<<"Status           "<<"Duration          "<<"Cost"<<endl;
    for(auto* i:bike)
    {
        file<<i->getName()<<","<<i->getVehicleNum()<<" ,"<<i->getStatus()<<","<<i->getDuration()<<","<<i->getCost()<<endl;
    }
    cout<<"Data written to CSV file"<<endl<<endl;
    file.close();
}

list<Bike*> Bike_FO::readData()
{
    cout<<"Reading data from Bike file"<<endl;

    list<Bike*> bike;
    ifstream file("bike.csv");
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return bike;
    }

    string line, name, status,number;
    int duration;
    float cost;

    getline(file, line);
    while (getline(file, name, ',') && getline(file, number,',') && getline(file, status, ',') && file >> duration && file.ignore() && file >> cost)
    {
        bike.push_back(new Bike(name, number, status, duration, cost));
    }
    file.close();
    cout<<"Data read from Bike file"<<endl<<endl;

    return bike;
}
