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

void Bike_FO::writeData(list<Bike> bike)
{
    cout<<"Writing Bike data to CSV file"<<endl;
    ofstream file("bike.csv");
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Status           "<<"Duration          "<<"Cost"<<endl;
    for(auto i:bike)
    {
        file<<i.getName()<<","<<i.getStatus()<<","<<i.getDuration()<<","<<i.getCost()<<endl;
    }
    cout<<"Data written to CSV file"<<endl<<endl;
    file.close();
}

list<Bike> Bike_FO::readData()
{
    cout<<"Reading data from Bike file"<<endl;

    list<Bike> bike;
    ifstream file("Bike.csv");
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return bike;
    }

    string line, name, status;
    int duration;
    float cost;

    getline(file, line);
    while (getline(file, name, ',') && getline(file, status, ',') && file >> duration && file.ignore() && file >> cost)
    {
        bike.push_back(Bike(name, status, duration, cost));
    }
    file.close();
    cout<<"Data read from Bike file"<<endl<<endl;

    return bike;
}
