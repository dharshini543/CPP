#include "book.h"
#include<iostream>

Book::Book()
{
    cout<<"Default"<<endl;
    m_length = 10;
    m_width = 10;
    m_name = "C++";
    m_numOfPages = 200;
    m_colour = "white";
    display();
}

Book::Book(float m_length,int numofPages,float width)
{
    cout<<"Parameterized"<<endl;
    this->m_length = m_length;
    m_width = width;
    m_numOfPages = numofPages;
    display();
}

void Book::display()
{
    cout<<m_length<<endl;
    cout<<m_width<<endl;
    cout<<m_name<<endl;
    cout<<m_numOfPages<<endl;
    cout<<m_colour<<endl;
    cout<<"C++"<<endl;
}

