#include "Animal.h"

Animal::~Animal()
{
    cout<<"Animal Destructor"<<endl;
}

Animal::Animal()
{
    std::cout<<"Animal constructor "<<m_colour<<std::endl;
    std::cout<<"Animal colour :"<<m_colour<<std::endl;
    std::cout<<"Animal legs :"<<m_numOfLegs<<std::endl;

}

