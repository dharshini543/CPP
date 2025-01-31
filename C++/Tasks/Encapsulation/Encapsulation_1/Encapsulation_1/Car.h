#ifndef CAR_H
#define CAR_H
#include<iostream>
using namespace std;
class Car
{
    int m_length;
    int m_width;
public:
    Car();
    ~Car();
    int getwidth();
    void setwidth(int width);
};

#endif // CAR_H
