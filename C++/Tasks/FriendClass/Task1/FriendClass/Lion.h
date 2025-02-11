#ifndef LION_H
#define LION_H

#include"Animal.h"
#include <iostream>
using namespace std;

class Lion
{
    Animal *ptr;

public:
    Lion();
    ~Lion();
    void display();
};

#endif // LION_H
