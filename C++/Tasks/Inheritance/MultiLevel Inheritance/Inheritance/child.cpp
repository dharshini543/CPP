#include "child.h"
#include <iostream>

child::child(int c_salary,string c_name, int c_age, int c_phno) :parent(c_salary,c_name,c_age,c_phno)
{
    cout<<"Child class constructor called"<<endl;
}
void child::display()
{
    cout<<"Salary :"<<m_salary<<endl;
    cout<<"Name :"<<m_name<<endl;
    cout<<"Age :"<<m_age<<endl;
    cout<<"Phnum :"<<m_phnum<<endl;
}
child::~child()
{
    cout<<"Child class Destructor called"<<endl;
}

