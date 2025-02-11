
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;
#include <string>

class Vehicle
{
private:
    int vehiclenumber;

public:
    string fuel;
    Vehicle();
    ~Vehicle();
    virtual void fuelfun(string fuel);
};

#endif // VEHICLE_H

