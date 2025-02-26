#include <iostream>
#include"Car.h"
#include "Bike.h"
using namespace std;
/*template <typename T>
T add(T a,T b);


int main()
{
    double a = 10.5,b = 20.7;
    auto sum = add<double>(a,b);
    cout << "Sum :" <<sum<< endl;
    return 0;
}
template <typename T>
T add(T a,T b)
{
    T sum = a + b;
    return sum;
}*/
//template <typename T>
int main()
{
    /*Car car;
    auto C = car.add<double>(10,20,30);
    cout<<C<<endl;
    auto D = car.add<int>(10,20);
    cout<<D<<endl;
    auto E = car.add<char>('a');
    cout<<E<<endl;
    auto G = car.add<string,string>("Dharshini","Pallavi");
    cout<<G<<endl;
    auto H = car.add<int,float>(10,10.5);
    cout<<H<<endl;
    auto z = car.add<int,int>(10,20);
    cout<<z<<endl;*/

   Bike<int,double> bike;
    auto c = bike.sub(20.5,10.5,10);
    Bike<double,double> B1;
    auto d = B1.mul(1.5,10.7);
    cout<<c<<endl;
    cout<<d<<endl;

}
