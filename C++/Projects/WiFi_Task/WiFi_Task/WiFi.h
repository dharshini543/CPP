#ifndef WIFI_H
#define WIFI_H
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
    string getName() const;
    int getSignalStrength() const;
    string getStatus() const;
    string getPassword() const;
    void setStatus(string status);
    ~WiFi();
};

#endif // WIFI_H
