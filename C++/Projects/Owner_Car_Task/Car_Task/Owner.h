#ifndef OWNER_H
#define OWNER_H

#include "Car.h"
#include "Driver.h"
#include <string>

class Owner
{
public:
    Owner(string name);
    ~Owner();
    void assignDriver(Driver* driver);
    string getName();
private:
    Car* m_car = new Car;
    string m_ownerName;
};

#endif // OWNER_H
