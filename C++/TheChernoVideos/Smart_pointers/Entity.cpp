#include "Entity.h"
#include<iostream>
using namespace std;

Entity::Entity()
{
    cout<<"Created Entity"<<endl;
}
Entity::~Entity()
{
    cout<<"Destroyed Entity"<<endl;
}
void Entity::print()
{
    cout<<"print function"<<endl;
}
