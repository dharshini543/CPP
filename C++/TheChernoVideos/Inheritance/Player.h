#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player:public Entity
{
public:
    const char* m_name;
    float m_x,m_y;

    void printName();
};

#endif // PLAYER_H
