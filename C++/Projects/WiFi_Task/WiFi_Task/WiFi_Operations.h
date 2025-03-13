#ifndef WIFI_OPERATIONS_H
#define WIFI_OPERATIONS_H

#include "WiFi.h"
#include"File_Operations.h"
#include <list>

class WiFi_Operations
{
private:
    File_Operations* fp;
    list<WiFi*> m_wifi;
public:
    WiFi_Operations();
    void initWiFi(list<WiFi *> wifi);
    void sortWiFiList();
    void connect();
    void display();
    ~WiFi_Operations();
};

#endif // WIFI_OPERATIONS_H
