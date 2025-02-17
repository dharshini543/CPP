#include <iostream>
#include"ShallowCopy.h"
#include"DeepCopy.h"
using namespace std;

int main()
{
    /*ShallowCopy obj1 = 20;
    ShallowCopy obj2 = obj1;
    obj1.show();
    obj2.show();*/

    DeepCopy obj1 = 20;
    DeepCopy obj2 = obj1;
    obj1.show();
    obj2.show();
    return 0;
}
