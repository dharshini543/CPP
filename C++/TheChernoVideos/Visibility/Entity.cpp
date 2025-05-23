#include "Entity.h"
#include<iostream>
using namespace std;

Entity::Entity()
{
    m_x = 1;
    m_y = 2;
    m_a = 3;
    m_z = 4;
}
void Entity::printprivate()
{
    cout<<"print Private"<<endl;
}
void Entity::printProtected()
{
    cout<<"print protected"<<endl;
}
void Entity::printPublic()
{
    cout<<"Print Public"<<endl;
}
