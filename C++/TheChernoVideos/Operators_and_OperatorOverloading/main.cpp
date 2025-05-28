#include "Vector.h"
#include <iostream>
using namespace std;


int main()
{
    Vector position(4.0f,4.0f);
    Vector speed(0.5f , 1.5f);
    Vector powerup(1.1f,1.1f);
    Vector result1 = position + speed;
    Vector result2 = position + speed *powerup ;
    cout<<result2;

    if(result1 == result2)
    {
        cout<<result2;
    }
    else
    {
        cout<<result1;
    }
    if(result1 != result2)
    {
        cout<<"True";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}
