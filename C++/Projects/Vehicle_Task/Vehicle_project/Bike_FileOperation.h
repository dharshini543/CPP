#ifndef BIKE_FILEOPERATION_H
#define BIKE_FILEOPERATION_H

#include "Bike.h"
#include <list>
class Bike_FO
{
public:
    Bike_FO();
    ~Bike_FO();
    void writeData(list<Bike> bike);
    list<Bike> readData();
};

#endif // BIKE_FILEOPERATION_H
