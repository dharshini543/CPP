#include "entity.h"

Entity::Entity()
{
    cout<<"Constructor"<<endl;
}

Entity::~Entity()
{
    cout<<"Destructor"<<endl;

}

void Entity::print() const
{
    cout<<"Hello"<<endl;
}


