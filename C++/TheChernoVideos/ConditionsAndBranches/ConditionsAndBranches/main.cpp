#include "Log.h"
#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    bool comparisionResult = x == 5;
    if(comparisionResult)
    {
        Log("HelloWorld");
    }
    const char* ptr = "Hello";
    if(ptr != nullptr)
    {
        Log("ptr is Hello");
    }
    else
    {
        Log("ptr is NULL");
    }
    return 0;
}
