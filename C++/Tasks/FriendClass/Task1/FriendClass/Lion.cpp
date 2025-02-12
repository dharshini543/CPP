#include "Lion.h"

Lion::Lion()
{
    ptr = new Animal("red",2);

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

