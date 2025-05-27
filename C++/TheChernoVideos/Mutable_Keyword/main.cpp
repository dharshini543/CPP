#include <iostream>
#include"Entity.h"

using namespace std;
    //we can change value of mutable variable even in const fun;
//we use mutable in two cases 1.const functions 2. lambda expressions.

int main()
{
    const Entity e;
    e.getName();

    int x =0;
    auto f =[=]()mutable
    {

        x++;
        cout<<x<<endl;
        cout<<"Hello"<<endl;
    };
    f();
    cout << "Hello World!" << endl;
    return 0;
}
