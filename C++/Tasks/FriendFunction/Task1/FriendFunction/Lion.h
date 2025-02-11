#ifndef LION_H
#define LION_H

#include <iostream>
//#include "Animal.h"
using namespace std;
class Animal;
class Lion
{
    Animal *ptr;

public:
    Lion();
    ~Lion();
    void Display(Animal &A);
};

#endif // LION_H
