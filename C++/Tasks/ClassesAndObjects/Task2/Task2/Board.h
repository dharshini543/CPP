#ifndef BOARD_H
#define BOARD_H

#include <string>

class BOARD
{
public:
    float m_length;
    float m_width;
    std::string m_colour;

    BOARD(float length,float width,std::string colour);
    void display();
};



#endif // BOARD_H
