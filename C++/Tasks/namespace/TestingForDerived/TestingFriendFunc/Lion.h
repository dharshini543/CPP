#ifndef LION_H
#define LION_H

#include <iostream>
#include "Animal.h"
using namespace std;

class Animal;
class Lion:public Animal
{
    Animal *ptr;
    void Display(Animal &A);
public:
    Lion(string colour,int num);
    ~Lion();
};

#endif // LION_H
