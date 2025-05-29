#include <iostream>

using namespace std;
class A
{
private:
    int a;
    int b;
public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    A(A& z)
    {
        cout<<"COPY constructor"<<endl;
        a = z.a;
        b = z.b;
    }
    void operator = (A& h)
    {
        cout<<"ASSignment operator "<<endl;
        this->a = h.a;
        this->b = h.b;
    }
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }

};

int main()
{
    A a1(5,6);
    a1.print();
    A a2(7,8);
    a2.print();
    a2 = a1;
    //a2.operator =(a1);
    a2.print();
    A a3 = a2;
    a3.print();
    return 0;
}
