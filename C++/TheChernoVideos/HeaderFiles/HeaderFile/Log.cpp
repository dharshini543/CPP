#include "Log.h"
#include <iostream>

void Log(const char *message)
{
    std::cout<<message<<std::endl;
}

void initLog()
{
    std::cout<<"Initializing Log"<<std::endl;
}
