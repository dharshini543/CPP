#include "DeepCopy.h"
#include<iostream>
using namespace std;
DeepCopy::DeepCopy(int val)
{
    cout<<"DeepCopy constructor"<<endl;

    data = new int(val);

}

DeepCopy::DeepCopy(const DeepCopy &obj)
{
    data = new int(*obj.data);

}

void DeepCopy::show()
{
    cout<<"Value is :"<<*data<<endl;
    delete data;

}

DeepCopy::~DeepCopy()
{
    cout<<"ShallowCopy Destructor"<<endl;

}

