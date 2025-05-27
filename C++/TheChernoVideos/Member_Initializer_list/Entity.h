#ifndef ENTITY_H
#define ENTITY_H

#include "Example.h"
#include<string>
using namespace std;

class Entity
{
private:
    string m_name;
    int m_score;
    Example m_example;
public:
    Entity();
    Entity(const string& name);
    const string& getName()const;
};

#endif // ENTITY_H
