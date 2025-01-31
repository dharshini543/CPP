#include "Laptop.h"
#include <iostream>

using namespace std;
Laptop::Laptop()
{

}
Laptop::Laptop(int length,int width)
{
    m_length = length;
    m_width = width;
}

Laptop::Laptop(int length,int width,std::string brand,std::string colour)
{
    m_length = length;
    m_width = width;
    m_Brand = brand;
    m_colour = colour;
}

void Laptop::add (int a, int b)
{
    int sum;
    sum = a + b;
    cout<<sum<<endl;
}
void Laptop::add (float a, float b)
{
    float result;
    result= a + b;
    cout<<result<<endl;
}
void Laptop::add()
{
    cout<<"Hiii"<<endl;

}
void Laptop::add (double a, double b)
{
    double result;
    result= a + b;
    cout<<result<<endl;
}


void Laptop::sub(int a,int b)
{
    cout<<"Hloo"<<endl;

}
void Laptop::sub(double a,double b)
{
    cout<<"Byee"<<endl;

}


