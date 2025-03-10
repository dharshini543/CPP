#ifndef CSV_FILEOPERATION_H
#define CSV_FILEOPERATION_H
#include "WiFi.h"
#include <list>
class CSV_FileOperation
{
    list<WiFi> m_wifi;
public:
    CSV_FileOperation();
    void initWiFi(list<WiFi> wifi);
    void writeData(list<WiFi> &student);
    list<WiFi> readData();
    void display();
    ~CSV_FileOperation();
};

#endif // CSV_FILEOPERATION_H
