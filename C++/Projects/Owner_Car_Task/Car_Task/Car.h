#ifndef CAR_H
#define CAR_H

#include "Driver.h"

class Car
{ 
public:
    Car();
    ~Car();
    void assignDriver(Driver* driver);
private:
    Driver* m_driver;
};

#endif // CAR_H
