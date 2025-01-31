#include "parent.h"
#include <iostream>


parent::parent(int salary,string p_name,int p_phnum,int p_age):grandparent(p_name,p_phnum,p_age)
{
    m_salary = salary;
    cout<<"Parent class constructor called"<<endl;
}


parent::~parent()
{
    cout<<"Parent class Destructor called"<<endl;
}
