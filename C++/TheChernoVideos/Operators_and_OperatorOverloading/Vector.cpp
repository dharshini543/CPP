#include "Vector.h"

Vector::Vector(float x, float y):m_x(x),m_y(y){}

Vector Vector::operator+ (const Vector& other)const
{
    return Vector(m_x + other.m_x,m_y + other.m_y);
}

Vector Vector::operator* (const Vector& other)const
{
    return Vector(m_x * other.m_x,m_y * other.m_y);
}

ostream& operator<< (ostream& out,  const Vector &other)
{
    out<< other.m_x <<endl<<other.m_y;
    return out;
}
bool Vector::operator ==(const Vector& other)const
{
    return m_x == other.m_x &&  m_y == other.m_y;
}
bool Vector::operator !=(const Vector& other)const
{
    return m_x != other.m_x &&  m_y != other.m_y;
}
