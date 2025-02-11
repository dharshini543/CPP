#include <iostream>
using namespace std;
#include "add.h"

int main()
{
    add a1(10);
    add a2(20);

    add a3=a1+a2;
    a3.printadd();

    add a4=a1-a2;
    a4.printsub();

    add a5=a1*a2;
    a5.printmul();

    add a6=a1/a2;
    a6.printdiv();

    if(a1>=a2)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    if(a1<=a2)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    if(a1==a2)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}
