#include <iostream>
using namespace std;
#include"Entity.h"

int main()
{
    int a =2;
    int *b = new int[50];
    Entity* e = new Entity();

    *b =20;
    cout<<a<<" "<<*b<<endl;
    delete []b;
    delete e;
    return 0;
}
