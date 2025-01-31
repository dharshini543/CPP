#ifndef REMOTE_H
#define REMOTE_H

#include"TV.h"

class Remote:public TV
{
public:
    float m_numOfButtons;
    Remote();
    void display();
};

#endif // REMOTE_H
