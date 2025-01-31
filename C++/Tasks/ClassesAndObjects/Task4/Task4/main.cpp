#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    Calculator cal;
    cal.add(10);
    cal.add(10,20);
    cal.add(10,20,30);
    cal.sub(30);
    cal.sub(10,20);
    cal.sub(10,20,30);
    return 0;
}
