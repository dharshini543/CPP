#include "Car_FileOperation.h"
#include <iostream>
#include<fstream>

Car_FileOperation::Car_FileOperation()
{
    cout<<"Car File Operation Constructor"<<endl;
}

Car_FileOperation::~Car_FileOperation()
{
    cout<<"Car File Operation Destructor"<<endl;
}

void Car_FileOperation::writeData(list<Car*> car)
{
    ofstream file("car.csv");
    if (!file)
    {
        cout << "Error opening car  file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Duration           "<<"Number           "<<"Cost          "<<"Status"<<endl;
    for(auto* i:car)
    {
        file<<i->getName()<<","<<i->getDuration()<<","<<i->getVehicleNum()<<","<<i->getCost()<<","<<i->getStatus()<<endl;
    }
    cout<<"Data written to Car CSV file"<<endl;
    file.close();
}

list<Car*> Car_FileOperation::readData()
{
    list<Car*> car;
    ifstream file("car.csv");
    if (!file)
    {
        cout << "Error opening Car file for reading!" << endl;
        return car;
    }

    string line, name, status,number;
    int duration;
    float cost;

    getline(file, line);
    while (getline(file, name, ',') && file >> duration && file.ignore() && getline(file, number,',') && file >> cost && file.ignore() && getline(file, status))
    {
        car.push_back(new Car(name, duration, number, cost,status));
    }

    file.close();
    cout<<"Data read from Car file"<<endl;

    return car;
}
