#include "Log.h"
#include <iostream>

using namespace std;

int main()
{
    for(int i = 0 ; i < 5;i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        Log("Hello World");
        std::cout<<i<<std::endl;
    }
    for(int i = 0 ; i < 5;i++)
    {
        if((i + 1) % 2 == 0)
        {
            break;
        }
        Log("Hello World");
        std::cout<<i<<std::endl;
    }
    std::cout<<"HIIIII"<<std::endl;

    for(int i = 0 ; i < 5;i++)
    {
        if((i + 1) % 2 == 0)
        {
            return 0;
        }
        Log("Hello World");
        std::cout<<i<<std::endl;
    }
    std::cout<<"HIIIII"<<std::endl;
    return 0;
}
