#ifndef CAR_H
#define CAR_H

#include "Driver.h"
class Owner;
class Car
{
    Driver* m_driver;
public:
    Car();
    ~Car();
    void assignDriver(Driver* driver);
};

#endif // CAR_H
