#include "Board.h"
#include <iostream>

using namespace std;

int main()
{
    BOARD B(10,20,"white");
    cout << "length :" << B.m_length<<endl;
    cout << "width :" << B.m_width<<endl;
    cout << "colour :" << B.m_colour<<endl;
    B.display();

    return 0;
}
