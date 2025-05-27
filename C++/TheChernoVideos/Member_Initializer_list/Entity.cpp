#include "Entity.h"
#include "Example.h"
#include <iostream>

Entity::Entity() :m_name("Unknown"),m_score(0),m_example(Example(8))
{
    cout<<"Constructor "<<endl;
    //m_name = "unknown";
}
Entity::Entity(const string& name) : m_name(name)
{
    cout<<"Parameterized Constructor "<<endl;

    // m_name =name;
}
const string& Entity::getName()const
{
    return m_name;
}
