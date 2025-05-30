#include<iostream>
using namespace std;
#include "Vertex.h"

Vertex::Vertex(float x, float y, float z)
{
    cout<<"Constructor"<<endl;
        m_x = x;
        m_y = y;
        m_z = z;
}

Vertex::Vertex(const Vertex &vertex)
{
    m_x = vertex.m_x;
    m_y = vertex.m_y;
    m_z = vertex.m_z;
    cout<<"Copy Constructor"<<endl;
}

Vertex::~Vertex()
{
    cout<<"Destructor"<<endl;

}
