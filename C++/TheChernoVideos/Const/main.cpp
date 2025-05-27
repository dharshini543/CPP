
#include "Entity.h"
#include <iostream>

using namespace std;


void printEntity(const Entity& e)
{
    cout<<e.getX()<<endl;
}

int main()
{
    const int Max_Age =90;
    const int* a = new int;// we cannot modify the contents of the memoryAddress
    a = (int*)&Max_Age;
    //int const* a = new int; similar to above we cannot change the value at the particular memory address -> *a =20 is not possible


    int* const b = new int;// we cannot reassign the actual pointer itself to point to something else ,a = (int*)&Max_Age; this is not possible


    const int* const c = new int; // we cannot modify contents and we cannot reassign the acctual pointer pointing to something else
    cout << "Hello World!" << endl;
    return 0;
}
