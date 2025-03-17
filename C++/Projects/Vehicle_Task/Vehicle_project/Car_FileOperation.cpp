#include "Car_FileOperation.h"
#include <iostream>
#include<fstream>

Car_FileOperation::Car_FileOperation() {}

Car_FileOperation::~Car_FileOperation()
{

}

void Car_FileOperation::writeData(list<Car*> car)
{
    cout<<"Writing Car data to CSV file"<<endl;
    ofstream file("car.csv");
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Number          "<<"Status           "<<"Duration          "<<"Cost"<<endl;
    for(auto i:car)
    {
        file<<i->getName()<<","<<i->getVehicleNum()<<","<<i->getStatus()<<","<<i->getDuration()<<","<<i->getCost()<<endl;
    }
    cout<<"Data written to Car file"<<endl<<endl;
    file.close();
}

list<Car*> Car_FileOperation::readData()
{
    cout<<"Reading data from Car file"<<endl;

    list<Car*> car;
    ifstream file("car.csv");
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return car;
    }

    string line, name, number, status;
    int duration;
    float cost;

    getline(file, line);
    while (getline(file, name, ',') && getline(file, number,',') && getline(file, status, ',') && file >> duration && file.ignore() && file >> cost)
    {
        car.push_back(new Car(name, number, status, duration, cost));
    }
    file.close();
    cout<<"Data read from Car file"<<endl<<endl;

    return car;
}
