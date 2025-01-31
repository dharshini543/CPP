#include "ClassAndObject.h"

Rectangle::Rectangle(int a,int b)
{
    length = a;
    width = b;
}

int Rectangle::area()
{
    return length * width;

}
int Rectangle::perimeter(int length)
{
    return 2 *(length + width);
}
