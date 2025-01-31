#ifndef PEN_H
#define PEN_H

#include <string>
using namespace std;

class PenCap
{
public:
    float length;
    float width;
    string colour;

    PenCap();
};

class PenBody
{
public:
    float length;
    float width;
    string colour;

    PenBody();
};

class pen
{
public:
    string Brand;
    string colour;
    string Price;
    PenCap cap;
    PenBody Body;

    pen();
    void display();
};

#endif // PEN_H
