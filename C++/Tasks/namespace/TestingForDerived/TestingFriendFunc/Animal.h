#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include<iostream>
#include "Lion.h"
using namespace std;
//class Lion;
class Animal
{
    string m_colour;
    int m_numOfLegs;
public:
    ~Animal();
    Animal();
    friend void Lion::Display(Animal &A);

};

#endif // ANIMAL_H
