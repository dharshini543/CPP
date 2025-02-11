#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include "Lion.h"
using namespace std;

class Animal
{
    string m_colour;
    int m_numOfLegs;
public:
    ~Animal();
     Animal(string colour,int num);
    friend void Lion::Display(Animal &A);

};

#endif // ANIMAL_H
