#include <iostream>
#include "ClassAndObject.h"

using namespace std;

int main()
{
    Rectangle R1(10,20);
    cout << "length" <<R1.length<< endl;
    cout << "width" <<R1.width<< endl;
    cout << "Area:" <<R1.area()<< endl;
    cout << "Perimeter:" <<R1.perimeter(15)<< endl;

    return 0;
}
