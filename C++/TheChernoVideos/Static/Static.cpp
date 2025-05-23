#include "Static.h"
#include <iostream>
using namespace std;

int Entity :: x;
int Entity :: y;

Entity::Entity()
{

}

void Entity::print()
{
    cout<<x<<","<<y<<endl;
}
