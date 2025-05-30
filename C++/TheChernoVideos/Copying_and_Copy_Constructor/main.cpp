#include <iostream>
#include "String.h"
using namespace std;

int main()
{
    String string ="Dharshini";
    String second = string;
    cout<<string<<endl;
    cout<<second<<endl;

    second[2]= 'H';

    cout<<string<<endl;
    cout<<second<<endl;
    return 0;
}
