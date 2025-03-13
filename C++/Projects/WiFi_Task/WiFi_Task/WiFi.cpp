#include "WiFi.h"
#include <iostream>

WiFi::WiFi()
{
    cout<<"WiFi constructor"<<endl;
}

WiFi::WiFi(string name, int signalstrength, string status, string password)
{    
    cout<<"WiFi constructor"<<endl;
    m_name = name;
    m_signalStrength = signalstrength;
    m_status = status;
    m_password = password;
}

string WiFi::getName() const
{
    return m_name;
}

int WiFi::getSignalStrength() const
{
    return m_signalStrength;
}

string WiFi::getStatus() const
{
    return m_status;
}

string WiFi::getPassword() const
{
    return m_password;
}

void WiFi::setStatus(string status)
{
    m_status = status;
}

WiFi::~WiFi()
{
    cout<<"WiFi Destructor"<<endl;
}
