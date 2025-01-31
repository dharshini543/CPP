#include "TV.h"
#include "Remote.h"
#include<iostream>

using namespace std;

int main()
{
    TV t1;
    t1.display();
    Remote R1;
    R1.m_length = 20;
    cout<<"length :"<<R1.m_length<<endl;
    return 0;
}
