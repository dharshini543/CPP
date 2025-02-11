#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include<iostream>
using namespace std;

class Animal
{
    string m_colour;
    int m_numOfLegs;
public:
    ~Animal();
    Animal(string colour,int num);
    friend class Lion;

};

#endif // ANIMAL_H
