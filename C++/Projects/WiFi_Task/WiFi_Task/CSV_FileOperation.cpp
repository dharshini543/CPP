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
    file<<"Name          "<<"Strength           "<<"Status          "<<"Password"<<endl;
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

void CSV_FileOperation::sortWiFiList(list<WiFi>& wifi)
{
    for(auto i = wifi.begin(); i != wifi.end();i++)
    {
        for(auto j = next(i);j != wifi.end();j++)
        {
            if(i->getStatus() != "Connected" && j->getStatus() == "Connected")
            {
                iter_swap(i, j);
                /*auto temp = i;
                i = j;
                j = temp;*/
            }
            if(i->getStatus() == "Available" && j->getStatus() == "Saved")
            {
                iter_swap(i, j);
            }
            if(i->getStatus() == j->getStatus() && i->getSignalStrength() < j->getSignalStrength())
            {
                iter_swap(i, j);
            }
        }
    }
}

void CSV_FileOperation::connect()
{
    string password;
    string name;
    cout<<"Enter name of WiFi to connect"<<endl;
    cin>>name;
    for(auto i = m_wifi.begin();i != m_wifi.end();i++)
    {
        if(i->getStatus() == "Connected" && i->getName() == name)
        {
            cout<<"Already Connected"<<endl;
            break;
        }
        if(i->getStatus() == "Connected")
        {
            i->setStatus("Saved");
        }
        if(i->getName() == name)
        {
            if(i->getStatus() == "Saved")
            {
                i->setStatus("Connected");
                cout<<name<<" Connected"<<endl;
                this->display();
                return;
            }
            else if(i->getStatus() == "Available")
            {
                cout<<"Enter Password"<<endl;
                cin>>password;
                if(i->getPassword() == password)
                {
                    i->setStatus("Connected");
                    cout<<name<<" Connected"<<endl;
                    this->display();
                }
                else
                {
                    cout<<"wrong password"<<endl;
                }
                return;
            }
        }

    }
    cout<<"WiFi with "<<name<<" not available"<<endl;

}
void CSV_FileOperation::display()
{
    this->sortWiFiList(m_wifi);
    cout<<"Name\t\t"<<"Strength\t\t"<<"Status\t\t\t"<<"Password"<<endl;
    for(auto i = m_wifi.begin();i != m_wifi.end();i++)
    {
        cout<<i->getName()<<"\t\t"<<i->getSignalStrength()<<"\t\t\t"<<i->getStatus()<<"\t\t\t"<<i->getPassword()<<endl;
    }
}
CSV_FileOperation::~CSV_FileOperation()
{

}
