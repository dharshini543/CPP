#include "log.h"
#include<iostream>

Log::Log() {}

void Log::setLevel(int level)
{
    m_LogLevel = level;
}

void Log::warn(const char *message)
{
    if(m_LogLevel >= LogLevelWarning)
    std::cout<<"[WARNING]: "<<message<<std::endl;
}

void Log::info(const char *message)
{
    if(m_LogLevel >= LogLevelInfo)

    std::cout<<"[INFO]: "<<message<<std::endl;
}
void Log::error(const char *message)
{
    if(m_LogLevel >= LogLevelError)
    std::cout<<"[ERROR]]: "<<message<<std::endl;
}
