#include <iostream>
using namespace std;
#include"Entity.h"

void printEntity(const Entity& entity)
{

}

int main()
{
    printEntity(22);
    printEntity(Entity("Dharshini"));
    Entity a("Dharshini");

   // Entity a = Entity((string)("Dharshini"));
    Entity b(22);
    return 0;
}
