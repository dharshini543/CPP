#ifndef DRIVER_H
#define DRIVER_H

#include <string>
using namespace std;

class Driver
{
public:
    Driver(string name);
    ~Driver();
    string getName();
private:
    string m_driverName;

};

#endif // DRIVER_H
