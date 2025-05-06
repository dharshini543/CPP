#include"Log.h"

int main()
{
    bool condition = true;

    for(int i = 0 ; i < 5;i++)
    {
        Log("Hello World");
        if(!(i < 5))
        {
            condition = false;
        }
    }

    Log("=======================");

    int i = 0;
    while(i < 5)
    {
        Log("Hello World");
        i++;
    }

    bool result = false;
    while(result)
    {
        Log("Hello");
    }

    do
    {
        Log("Hello");

    }while(result);
    return 0;
}
