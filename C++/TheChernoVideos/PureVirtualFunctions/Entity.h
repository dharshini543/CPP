#ifndef ENTITY_H
#define ENTITY_H
#include<string>
#include "Printable.h"
using namespace std;

class Entity:public Printable
{
public:
    virtual string getName();
    string GetClassName();
};

#endif // ENTITY_H
