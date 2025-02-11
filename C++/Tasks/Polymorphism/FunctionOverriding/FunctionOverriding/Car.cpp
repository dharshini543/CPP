
#include "Car.h"
#include <iostream>
using namespace std;
#include <string>


car::car()
{
    cout<<"car class constructor called"<<endl;
}
car::~car()
{
    cout<<"car class destructor called"<<endl;
}

void car::fuelfun(string fuel)
{
    cout<<"car class function called"<<endl;
    cout<<"fuel name="<<fuel<<endl;
}

