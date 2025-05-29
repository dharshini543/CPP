#include"Entity.h"
#include"Player.h"
#include <iostream>

int main()
{
    Entity* e= new Entity();
    cout<<e->GetClassName()<<endl;

    Player* p = new Player("Dharshini");
    cout<<p->getName()<<endl;
    return 0;
}
