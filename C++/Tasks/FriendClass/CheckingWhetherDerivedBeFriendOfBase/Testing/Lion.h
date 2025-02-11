#ifndef LION_H
#define LION_H

#include"Animal.h"
#include <iostream>
using namespace std;

class Lion:public Animal
{
    Animal *ptr;

public:
    Lion(std::string colour,int num);
    ~Lion();
    void display();
};

#endif // LION_H
