#include "Entity.h"
#include <iostream>
using namespace std;

int main()
{
    Entity* e ;
    {
        Entity *entity= new Entity("Dharshini");
        e = entity;
        cout<<e->getName()<<endl;
    }
    delete e;
    return 0;
}
