#ifndef TECHHEAD_H
#define TECHHEAD_H

#include "Manager.h"
#include "Engineer.h"

class TechHead:public Engineer,public Manager
{
public:
    TechHead();
    ~TechHead();
};

#endif // TECHHEAD_H
