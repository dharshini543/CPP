#include "Car_FileOperation.h"
#include <iostream>
#include<fstream>

Car_FileOperation::Car_FileOperation() {}

Car_FileOperation::~Car_FileOperation()
{

}

void Car_FileOperation::writeData(list<Car> car)
{
    cout<<"Writing Car data to CSV file"<<endl;
    ofstream file("car.csv");
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Status           "<<"Duration          "<<"Cost"<<endl;
    for(auto i:car)
    {
        file<<i.getName()<<","<<i.getStatus()<<","<<i.getDuration()<<","<<i.getCost()<<endl;
    }
    cout<<"Data written to CSV file"<<endl<<endl;
    file.close();
}

list<Car> Car_FileOperation::readData()
{
    cout<<"Reading data from Bike file"<<endl;

    list<Car> car;
    ifstream file("car.csv");
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return car;
    }

    string line, name, status;
    int duration;
    float cost;

    getline(file, line);
    while (getline(file, name, ',') && getline(file, status, ',') && file >> duration && file.ignore() && file >> cost)
    {
        car.push_back(Car(name, status, duration, cost));
    }
    file.close();
    cout<<"Data read from Bike file"<<endl<<endl;

    return car;
}
