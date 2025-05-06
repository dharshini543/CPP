#include <iostream>
#include"Operations.h"
using namespace std;

int main()
{
    int a = 5;
    int& ref = a;
    cout << ref<< endl;
    ref = 2;
    cout << ref<< endl;

    int b = 10;
    increment(b);
    cout<<b<<endl;

    int c = 10;
    int d = 5;
    int& z = d;
    z = c;
    cout<<d<<endl;

    return 0;
}
