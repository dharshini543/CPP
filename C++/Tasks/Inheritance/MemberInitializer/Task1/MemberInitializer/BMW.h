#ifndef BMW_H
#define BMW_H
#include "Car.h"

class BMW:public Car
{
public:
    BMW(int model, int engineType);
    ~BMW();
};

#endif // BMW_H
