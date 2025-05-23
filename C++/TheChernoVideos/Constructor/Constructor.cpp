#include "Constructor.h"
#include<iostream>
using namespace std;

Entity::Entity()
{
    cout<<"Constructor Called"<<endl;

}
Entity::Entity(int x ,int y)
{
    cout<<"Parameterized Constructor Called"<<endl;

    m_x = x;
    m_y = y;
}
void Entity::print()
{
    cout<<m_x<<","<<m_y<<endl;
}
