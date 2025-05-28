#include "Entity.h"
#include<iostream>

Entity::Entity(const string& name):m_name(name),m_age(-1)
{
    cout<<m_name <<" "<<m_age<<endl;
}
Entity::Entity(int age):m_name("Unknown"),m_age(age)
{
    cout<<m_name <<" "<<m_age<<endl;

}
