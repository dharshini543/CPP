#include <iostream>
using namespace std;
#include "singleton.h"
void fun()
{
    static int i = 0;
    i++;
    cout<<i<<endl;
}

int main()
{
    fun();
    fun();
    fun();
    fun();

    SingleTon singleton;
    singleton.get().hello();
    return 0;
}
