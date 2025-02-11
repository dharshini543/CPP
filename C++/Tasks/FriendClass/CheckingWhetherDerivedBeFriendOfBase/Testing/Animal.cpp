#include "Animal.h"

Animal::~Animal()
{
    cout<<"Animal Destructor"<<endl;
}

Animal::Animal(string colour, int num)
{
    std::cout<<"Animal Constructor"<<std::endl;

    m_colour = colour;
    m_numOfLegs = num;
    std::cout<<"Animal colour :"<<m_colour<<std::endl;
    std::cout<<"Animal legs :"<<m_numOfLegs<<std::endl;

}
