#include "Car.h"
#include <string>
using namespace std;
Car::Car()
{

}

template<typename T>
T Car::add(T a, T b, T c)
{
    return a + b + c;
}
template double Car::add<double>(double,double,double);


template<typename T>
T Car::add(T a,T b)
{
    return a ;
}
template int Car::add<int>(int,int);
template string Car::add<string>(string,string);


template<typename T>
T Car::add(T a)
{
    return a + 10;
}
template char Car::add<char>(char);

template<typename I, typename F>
F Car::add(I a, F b)
{
    return a + b;

}
template float Car::add<int,float>(int,float);
template int Car::add<int,int>(int,int);
template string Car::add<string,string>(string,string);

