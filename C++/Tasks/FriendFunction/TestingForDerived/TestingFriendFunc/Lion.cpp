#include "Lion.h"
#include "Animal.h"

Lion::Lion(string colour,int num):Animal(colour,num)
{
    cout<<"Lion Constructor"<<endl;
}
Lion::~Lion()
{
    cout<<"Lion Destructor"<<endl;
}
void Lion::Display(Animal &A)
{
    std::cout<<"display function called"<<std::endl;
    std::cout<< A.m_colour<<std::endl;
    std::cout<< A.m_numOfLegs<<std::endl;
}

