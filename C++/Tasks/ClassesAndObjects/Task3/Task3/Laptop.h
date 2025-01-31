#ifndef LAPTOP_H
#define LAPTOP_H

#include <string>

class Laptop
{
public:
    int m_length = 100;
    int m_width;
    std::string m_Brand;
    std::string m_colour;

    Laptop();
    Laptop(int length,int width);
    Laptop(int length,int width,std::string brand,std::string colour );
    void add (int a, int b);
    void add (float a, float b);
    void add (double a, double b);
    void add();
    void sub(int a,int b);
    void sub(double a,double b);
};

#endif // LAPTOP_H
