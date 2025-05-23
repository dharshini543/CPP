#include "Entity.h"
#include<iostream>
using namespace std;

void Entity::move(float xa,float ya)
{
    m_x += xa;
    m_y += ya;

    cout<<m_x<<","<<m_y<<endl;
}
