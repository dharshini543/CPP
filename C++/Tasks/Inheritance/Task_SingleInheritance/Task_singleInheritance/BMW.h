#ifndef BMW_H
#define BMW_H

#include "Car.h"

class BMW:public Car
{
    int a;
public:
    int b;
    BMW();
    ~BMW();
protected:
    int c;
};

#endif // BMW_H
