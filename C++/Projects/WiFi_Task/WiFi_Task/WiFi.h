#ifndef WIFI_H
#define WIFI_H
#include <list>
#include <string>
using namespace std;

class WiFi
{
private:
    string m_name;
    int m_signalStrength;
    string m_status;
    string m_password;
public:
    WiFi();
    WiFi(string name, int signalstrength, string status, string password);
    string getName();
    int getSignalStrength();
    string getStatus();
    string getPassword();
    ~WiFi();
};

#endif // WIFI_H
