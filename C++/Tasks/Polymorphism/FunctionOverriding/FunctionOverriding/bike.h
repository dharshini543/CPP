#ifndef BIKE_H
#define BIKE_H
#include <iostream>
using namespace std;
#include <string>
#include "Vehicle.h"

class Bike:public Vehicle
{

public:
    Bike();
    ~Bike();
    void fuelfun(string fuel);
};

#endif

