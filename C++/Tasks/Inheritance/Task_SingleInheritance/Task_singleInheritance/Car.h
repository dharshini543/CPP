#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;
class Car
{
    float m_length;
    float m_width;
public:
    string m_colour;
    Car();
    ~Car();
protected:
    string m_brand;
};

#endif // CAR_H
