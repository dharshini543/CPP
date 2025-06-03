#include <iostream>
#include "anotherclass.h"
#include "derived.h"
#include "base.h"

using namespace std;

int main()
{
    Derived* derived = new Derived();

    Base* base = derived;

    AnotherClass* ac = dynamic_cast<AnotherClass*>(base);

    // double value =5.3;

    // double a =(int) value+5.25;

    // double s = static_cast<int>(value)+5.25;
    // cout<<s<<","<<a<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
