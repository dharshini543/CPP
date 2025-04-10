#include "Owner.h"
#include <iostream>

using namespace std;

int main()
{
    Owner owner;
    int input;
    cout<<"Enter 1. Assign Driver"<<endl;
    cin>>input;
    if(input == 1)
    {
        Driver* driver = new Driver;
        owner.assignDriver(driver);
        delete driver;
    }
    return 0;
}
