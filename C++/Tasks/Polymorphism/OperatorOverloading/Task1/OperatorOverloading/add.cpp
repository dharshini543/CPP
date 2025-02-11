#include "add.h"
using namespace std;
#include <iostream>

add::add()
{
    //cout<<"add class default constructor called"<<endl;
}

add::~add()
{
    cout<<"add class destructor called"<<endl;
}

add::add(int num)
{
    m_num=num;
}

add add::operator +(const add &obj)
{
    add result;
    result.m_num=this->m_num+obj.m_num;
    //cout<<"this"<<this->m_num<<endl;
    //cout<<"num"<<obj.m_num<<endl;
    return result;
}

void add::printadd()
{
    cout<<"result for + operator overloading is="<<m_num<<endl;
}

add add::operator -(const add &obj)
{
    add result;
    result.m_num=this->m_num-obj.m_num;
    return result;
}

void add::printsub()
{
    cout<<"result for - operator overloading is="<<m_num<<endl;
}

add add::operator *(const add &obj)
{
    add result;
    result.m_num=this->m_num*obj.m_num;
    return result;
}

void add::printmul()
{
    cout<<"result for * operator overloading is="<<m_num<<endl;
}

add add::operator /(const add &obj)
{
    add result;
    result.m_num=this->m_num/obj.m_num;
    return result;
}

void add::printdiv()
{
    cout<<"result for / operator overloading is="<<m_num<<endl;
}

bool add::operator >=(const add &obj)
{
    if(this->m_num>=obj.m_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool add::operator <=(const add &obj)
{
    if(this->m_num<=obj.m_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool add::operator ==(const add &obj)
{
    if(this->m_num==obj.m_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
