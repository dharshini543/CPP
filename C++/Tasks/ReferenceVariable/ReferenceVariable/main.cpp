#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    //<datatype> & <reference_variable> = <existing_variable>
    int &c = a;
    cout<<"c = "<<c<<endl;
    c = b;
    cout<<"c = "<<c<<endl;
    cout<<"a = "<<a<<endl;

    return 0;
}
