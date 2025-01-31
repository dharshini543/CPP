#include "BMW.h"
#include<iostream>
using namespace std;

BMW::BMW(int model, int engineType):Car(model,engineType)
{
    cout<<"BMW constructor"<<endl;
}
BMW::~BMW()
{
    cout<<"BMW Destructor"<<endl;

}
