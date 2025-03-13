#include "CSV_FileOperation.h"
#include"WiFi.h"
#include <iostream>
#include<fstream>

CSV_FileOperation::CSV_FileOperation()
{
    cout<<"CSV constructor"<<endl;
}

void CSV_FileOperation::writeData(list<WiFi*> wifi)
{
    cout<<"Writing data to CSV file"<<endl;
    ofstream file("wifi.csv");
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"Strength           "<<"Status          "<<"Password"<<endl;
    for(auto *i:wifi)
    {
        file<<i->getName()<<","<<i->getSignalStrength()<<","<<i->getStatus()<<","<<i->getPassword()<<endl;
    }
    cout<<"Data written to CSV file"<<endl<<endl;
    file.close();
}

list<WiFi*> CSV_FileOperation::readData()
{
    cout<<"Reading data from CSV file"<<endl;

    list<WiFi*> wifi;
    ifstream file("wifi.csv");
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return wifi;
    }

    string line, name, status, password;
    int signalStrength;

    getline(file, line);
    while (getline(file, name, ',') && file >> signalStrength && file.ignore() && getline(file, status, ',') && getline(file, password))
    {
        wifi.push_back(new WiFi(name, signalStrength, status, password));
    }
    file.close();
    cout<<"Data read from CSV file"<<endl<<endl;

    return wifi;
}

CSV_FileOperation::~CSV_FileOperation()
{
    cout<<"CSV Destructor"<<endl;
}
