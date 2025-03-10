#include "CSV_FileOperation.h"
#include <iostream>
#include<fstream>

CSV_FileOperation::CSV_FileOperation()
{

}

void CSV_FileOperation::initWiFi(list<WiFi> wifi)
{
    m_wifi = wifi;
    CSV_FileOperation* ptr = new CSV_FileOperation;
    ptr->writeData(m_wifi);
    m_wifi = ptr->readData();
    delete ptr;
}

void CSV_FileOperation::writeData(list<WiFi> &wifi)
{
    cout<<"Writing data to CSV file"<<endl;
    ofstream file("wifi.csv");
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return ;
    }
    file<<"Name          "<<"SignalStrength           "<<"Status          "<<"Password"<<endl;
    for(auto i = wifi.begin(); i != wifi.end();i++)
    {
        file<<i->getName()<<","<<i->getSignalStrength()<<","<<i->getStatus()<<","<<i->getPassword()<<endl;
    }
    cout<<"Data written to CSV file"<<endl<<endl;
    file.close();
}

list<WiFi> CSV_FileOperation::readData()
{
    cout<<"Reading data from CSV file"<<endl;

    list<WiFi> wifi;
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
        wifi.push_back(WiFi(name, signalStrength, status, password));
    }
    file.close();
    cout<<"Data read from CSV file"<<endl<<endl;

    return wifi;
}

void CSV_FileOperation::display()
{
    for(auto i = m_wifi.begin(); i != m_wifi.end();i++)
    {
        if(i->getStatus() == "Connected")
        {
            cout<<i->getName()<<","<<i->getSignalStrength()<<","<<i->getStatus()<<","<<i->getPassword()<<endl;

        }
    }
    int count = 0;
    for(auto i = m_wifi.begin(); i != m_wifi.end();i++)
    {
        for(auto j = m_wifi.end();j != m_wifi.begin();j--)
        {
            if(i->getStatus() == "Saved" && j->getStatus() == "Saved")
            {
                if(i->getSignalStrength() > j->getSignalStrength())
                {
                    cout<<i->getName()<<","<<i->getSignalStrength()<<","<<i->getStatus()<<","<<i->getPassword()<<endl;
                    break;
                }
                else if(j->getSignalStrength() > i->getSignalStrength())
                {
                    cout<<j->getName()<<","<<j->getSignalStrength()<<","<<j->getStatus()<<","<<j->getPassword()<<endl;

                }
                else
                {
                    if(j->getSignalStrength() == i->getSignalStrength())
                    {
                        cout<<i->getName()<<","<<i->getSignalStrength()<<","<<i->getStatus()<<","<<i->getPassword()<<endl;

                    }

                }

            }
        }

    }
    for(auto i = m_wifi.begin(); i != m_wifi.end();i++)
    {
        if(i->getStatus() == "Available")
        {
            cout<<i->getName()<<","<<i->getSignalStrength()<<","<<i->getStatus()<<","<<i->getPassword()<<endl;
        }
    }
}
CSV_FileOperation::~CSV_FileOperation()
{

}
