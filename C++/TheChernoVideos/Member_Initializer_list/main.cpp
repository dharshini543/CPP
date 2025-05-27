#include "Entity.h"
#include <iostream>

using namespace std;

int main()
{
    Entity e0;
    cout<<e0.getName()<<endl;
    Entity e1("Dharshini");
    cout<<e1.getName()<<endl;
    return 0;
}
