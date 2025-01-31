#include "calculator.h"
#include<iostream>
using namespace std;

Calculator::Calculator()
{
    cout<<"Constructor"<<endl;
}

Calculator::~Calculator()
{
    cout<<"Destructor"<<endl;
}


void Calculator::add(int a)
{
    cout<<a<<endl;
}
void Calculator::add(int a,int b)
{
    cout<<a + b<<endl;
}
void Calculator::add(int a,int b,int c)
{
    cout<<a + b + c<<endl;
}

void Calculator::sub(int a)
{
    cout<<a<<endl;
}
void Calculator::sub(int a,int b)
{
    cout<<a - b<<endl;
}
void Calculator::sub(int a,int b,int c)
{
    cout<<a - b - c<<endl;
}


