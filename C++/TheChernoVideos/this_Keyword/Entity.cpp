#include "Entity.h"
#include<iostream>
using namespace std;

Entity::Entity(int x, int y)
{
    //  Entity* e = this;
    this->x = x;
    this->y = y;
    cout<<x<<" "<<y<<endl;
}
