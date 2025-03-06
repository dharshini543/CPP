//Overloading Binary Operators using Member functions
//If the Operator function is a member function of a class
//syntax: <returntype> operator opr(<argument1>);
//argument1 : formal argument which refers to the object on the right side of the binary operator

#include <iostream>
using namespace std;

class A
{
    int a,b;
public:
    A(int a, int b);
    A();
    A operator +(A&);
    void display();
};
A::A()
{

}
void A::display()
{
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
}
A::A(int x,int y)
{
    a = x;
    b = y;
}
A A::operator+(A& a2)
{
    A a3;
    a3.a = a + a2.a;
    a3.b = b + a2.b;
    return a3;
}
int main()
{
    A a1(5,6);
    A a2(6,7);
    A a3;
    a3 = a1 + a2;
    //a3 = a1.operator +(a2);
    //a3 = operator +(&a1,a2);
    a3.display();
    return 0;
}
