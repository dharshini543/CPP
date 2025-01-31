#include "Tv.h"
using namespace std;
#include<iostream>
int main()
{
    TV tv1;
    TV * ptr = new TV;
    cout<<"Before delete"<<endl;
    delete(ptr);
    cout<<"After delete"<<endl;
    return 0;
}
