#include "WiFi.h"
#include "CSV_FileOperation.h"
#include<iostream>

WiFi::WiFi() {}

WiFi::WiFi(string name, int signalstrength, string status, string password)
{
    m_name = name;
    m_signalStrength = signalstrength;
    m_status = status;
    m_password = password;
}

string WiFi::getName()
{
    return m_name;
}

int WiFi::getSignalStrength()
{
    return m_signalStrength;
}

string WiFi::getStatus()
{
    return m_status;
}

string WiFi::getPassword()
{
    return m_password;
}

WiFi::~WiFi()
{

}
