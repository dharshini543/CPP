#include "ShallowCopy.h"
#include<iostream>
using namespace std;

ShallowCopy::ShallowCopy(int val)
{
    m_data = new int(val);
    cout<<"ShallowCopy Constructor"<<endl;
}

ShallowCopy::ShallowCopy(const ShallowCopy &obj)
{
    m_data = obj.m_data;
}

void ShallowCopy::show()
{
    cout<<"Value is :"<<*m_data<<endl;
    delete m_data;
}

ShallowCopy::~ShallowCopy()
{
    cout<<"ShallowCopy Desstructor"<<endl;

}

