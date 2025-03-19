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

void Car_FileOperation::writeData(list<Car*> carList)
{
    ofstream file("car.csv");
    if (!file)
    {
        cout << "Error opening car  file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Number           "<<"Cost          "<<"Status"<<endl;
    for(auto* i:carList)
    {
        file<<i->getName()<<","<<i->getVehicleNum()<<","<<i->getCost()<<","<<i->getStatus()<<endl;
    }
    cout<<"Data written to Car CSV file"<<endl;
    file.close();
}

list<Car*> Car_FileOperation::readData()
{
    list<Car*> carList;
    ifstream file("car.csv");
    if (!file)
    {
        cout << "Error opening Car file for reading!" << endl;
        return carList;
    }

    string line, carName, carStatus,carNumber;
    float carCost;

    getline(file, line);
    while (getline(file, carName, ',') && getline(file, carNumber,',') && file >> carCost && file.ignore() && getline(file, carStatus))
    {
        carList.push_back(new Car(carName, carNumber, carCost,carStatus));
    }

    file.close();
    cout<<"Data read from Car file"<<endl;

    return carList;
}
