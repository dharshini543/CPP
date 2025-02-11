#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include <string>

class car:public Vehicle
{
public:
    car();
    ~car();
    void fuelfun(string fuel);
};

#endif

