#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    //<datatype> & <reference_variable> = <existing_variable>
    int &b = a;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
