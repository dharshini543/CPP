#include <iostream>
#include "TechHead.h"
using namespace std;

int main()
{
    TechHead TH1;
    TH1.Engineer::display();
    TH1.m_age = 25;
    cout << "Hello World!" << endl;
    return 0;
}
