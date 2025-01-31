#include "Car.h"

Car::Car()
{
    cout<<"Car constructor"<<endl;
}
int Car::getwidth()
{
    return m_width;
}
void Car::setwidth(int width)
{
    m_width = width;
}
Car::~Car()
{
    cout<<"Car Destructor"<<endl;
}
