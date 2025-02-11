#include "Lion.h"

Lion::Lion(string colour,int num):Animal(colour,num)
{
    ptr = new Animal("red",20);

    cout<<"Lion Constructor"<<endl;
}

Lion::~Lion()
{
    cout<<"Lion Destructor"<<endl;
}

void Lion::display()
{
    std::cout<<"display function called"<<std::endl;
    std::cout<< ptr->m_colour<<std::endl;
    std::cout<< ptr->m_numOfLegs<<std::endl;
}

