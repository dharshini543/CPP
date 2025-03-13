#include "WiFi_Operations.h"
#include"WiFi.h"
#include "CSV_FileOperation.h"
#include <iostream>

WiFi_Operations::WiFi_Operations()
{
    cout<<"WiFi_Operations constructor"<<endl;
}

void WiFi_Operations::initWiFi(list<WiFi*> wifi)
{
    m_wifi = wifi;
    fp = new CSV_FileOperation;
    fp->writeData(m_wifi);
    m_wifi = fp->readData();
}

void WiFi_Operations::sortWiFiList()
{
    /*for(auto i = m_wifi.begin();i != m_wifi.end();i++)
    {
        for(auto j = next(i);j != m_wifi.end();j++)
        {
            if(i->getStatus() != "Connected" && j->getStatus() == "Connected")
            {
                iter_swap(i, j);
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
    }*/

    for(auto *i :m_wifi)
    {
        for(auto *j:m_wifi)
        {
            if(j->getStatus() != "Connected" && i->getStatus() == "Connected")
            {
                iter_swap(i,j);
            }
            if(j->getStatus() == "Available" && i->getStatus() == "Saved")
            {
                iter_swap(i,j);
            }
            if(j->getStatus() == i->getStatus() && j->getSignalStrength() < i->getSignalStrength())
            {
                iter_swap(i,j);
            }
        }
    }
}

void WiFi_Operations::connect()
{
    string password;
    string name;
    cout<<"Enter name of WiFi to connect"<<endl;
    cin>>name;

    for(auto *i:m_wifi)
    {
        if(i->getStatus() == "Connected" && i->getName() == name)
        {
            cout<<"Already Connected"<<endl;
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
                this->sortWiFiList();
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
                    this->sortWiFiList();
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

void WiFi_Operations::display()
{
    cout<<"Name\t\t"<<"Strength\t\t"<<"Status\t\t\t"<<"Password"<<endl;
    for(auto *i : m_wifi)
    {
        cout<<i->getName()<<"\t\t"<<i->getSignalStrength()<<"\t\t\t"<<i->getStatus()<<"\t\t\t"<<i->getPassword()<<endl;
    }
}

WiFi_Operations::~WiFi_Operations()
{
    cout<<"WiFi_Operations Destructor"<<endl;
    for(auto *i : m_wifi)
    {
        delete i;
    }
    delete this->fp;
}
