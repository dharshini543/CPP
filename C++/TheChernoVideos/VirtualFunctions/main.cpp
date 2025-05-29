#include "Entity.h"
#include "Player.h"
#include <iostream>
using namespace std;


// void printName(Entity* entity)
// {
//     cout<<entity->getName()<<endl;
// }


int main()
{
    // Entity* e = new Entity();
    // cout<<e->getName()<<endl;
    // printName(e);

     Player* p = new Player("Dharshini");
    // printName(p);
    // cout<<p->getName()<<endl;

    Entity* entity = p;
    cout<<entity->getName()<<endl;
    return 0;
}
