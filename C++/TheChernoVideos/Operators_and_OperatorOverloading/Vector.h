#ifndef VECTOR_H
#define VECTOR_H
#include<ostream>
using namespace std;

class Vector
{
public:
    float m_x,m_y;
    Vector(float x, float y);

    Vector operator+ (const Vector& other)const;
    Vector operator* (const Vector& other)const;
    friend ostream& operator<< (ostream& out, const Vector &other);
    bool operator ==(const Vector& other)const;
    bool operator !=(const Vector& other)const;
};


#endif // VECTOR_H
