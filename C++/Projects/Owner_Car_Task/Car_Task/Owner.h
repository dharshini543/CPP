#ifndef OWNER_H
#define OWNER_H

#include "Car.h"
#include "Driver.h"

class Owner
{
public:
    Owner();
    ~Owner();
    void assignDriver(Driver* driver);
private:
    Car* m_car = new Car;
};

#endif // OWNER_H
