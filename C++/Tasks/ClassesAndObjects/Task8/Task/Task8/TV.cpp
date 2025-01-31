#include "TV.h"
#include <iostream>
TV::TV()
{
    m_length = 40;
    m_width = 30;
    m_thickness = 10;
    m_brand = "Sony";
    m_colour = "Black";
}

void TV::display()
{
    cout<<"Length :"<<m_length<<endl;
    cout<<"Width :"<<m_width<<endl;
    cout<<"Thickness :"<<m_thickness<<endl;
    cout<<"Brand :"<<m_brand<<endl;
    cout<<"Colour :"<<m_colour<<endl;

}
