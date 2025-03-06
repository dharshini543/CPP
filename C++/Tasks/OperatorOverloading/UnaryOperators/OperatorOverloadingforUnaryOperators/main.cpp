//Overloading Unary Operators using Member functions
//If the Operator function is a member function of a class
//syntax: <returntype> operator opr();
//here operator opr together becomes the function name
//operator is a keyword to create operator function

#include <iostream>
using namespace std;
/*class A
{
    int a;
    int b;
public:
    void operator -();
    void operator +();
    void display();
    A()
    {
        a = 1;
        b = 2;
    }
};
void A::operator-()
{
    a = -a;
    b = -b;
}
void A::operator+()
{
    a = +a;
}
void A::display()
{
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
}
int main()
{
    A a1;
    a1.display();
    -a1;
    //a1.operator - ();
    //operator -(&a1);
    a1.display();
    return 0;
}*/

//Overloading Unary Operators using "friend" functions
//friend <returntype> operator opr(<argument1>);
class B
{
    int a;
    int b;
public:
    friend void operator -(B&);
    void display();
    B()
    {
        a = 1;
        b = 2;
    }
};
void operator-(B & x)
{
    x.a = -x.a;
    x.b = -x.b;
}
void B::display()
{
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
}
int main()
{
    B b1;
    b1.display();
    -b1;
    //b1.operator - ();
    //operator -(b1);
    b1.display();
    return 0;
}
