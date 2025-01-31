#include "table.h"
#include <iostream>

Table::Table()
{
    m_length = 20;
    m_width = 10;
    m_height = 10;
    int  num = display();
    cout<<"num :"<<num<<endl;
}

int Table::display()
{
    cout<<"Length :"<<m_length<<endl;
    cout<<"Width :"<<m_width<<endl;
    cout<<"Height :"<<m_height<<endl;
    cout<<"Colour :"<<m_colour<<endl;
    return 10;
}
