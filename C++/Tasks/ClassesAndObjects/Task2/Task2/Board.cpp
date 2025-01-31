 #include <string>
#include <iostream>
#include "Board.h"
using namespace std;

BOARD::BOARD(float length, float width, std::string colour)
{
    m_length = length;
    m_width = width;
    m_colour = colour;
}

void BOARD ::display()
{
    cout<<"HIII"<<endl;
}


