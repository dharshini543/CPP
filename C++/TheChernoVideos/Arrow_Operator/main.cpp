#include <iostream>
#include "entity.h"
#include "scopedptr.h"
using namespace std;

struct Vector3
{
    float x,y,z;
};

int main()
{
    Entity e;
    e.print();

    Entity* ptr = &e;
    ptr->m_x = 2;
    ptr->print(); //to access fun from Dynamically created obj


    ScopedPtr entity = new Entity();
    entity->print(); // operator overloading


    int offset = (int)&((Vector3*)nullptr)->x;
    cout<<offset<<endl; // to find the offset

    cout << "Hello World!" << endl;
    return 0;
}
