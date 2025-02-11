#include "bike.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

Bike::Bike()
{
    cout<<"Bike constructor called"<<endl;
}

Bike::~Bike()
{
    cout<<"Bike class destructor called"<<endl;
}

void Bike::fuelfun(string fuel)
{
    cout<<"derived class Bike function called"<<endl;
    cout<<"fuel name="<<fuel<<endl;

}

