#include "Static.h"


int main()
{
    Entity e;
    Entity::x = 2 ;
    Entity::y = 3;
    Entity::print();

    Entity e1;
    Entity::x = 5 ;
    Entity::y = 6;
    Entity::print();
    return 0;
}
