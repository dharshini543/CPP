#include <iostream>

using namespace std;
class A
{
public:
    int m_a;
    float m_b;
    void set(A, int, float f);//call by value
    void set(int, A&);//call by reference
    void set(A* ,int);//call by pointers

};
void A::set(A x, int e,float f)//void A::set(A* const this,A x,int e)
{
    x.m_a = e;
    x.m_b = f;

}

void A::set(int f, A& y)
{
    y.m_a = f;
}

void A::set(A* z, int g)
{
    z->m_a =g;
}

int main()
{
    A obj;
    obj.m_a = 15;
    obj.m_b = 20;
    cout << "Before " <<"a : "<<obj.m_a<<" b :"<<obj.m_b<<endl;
    obj.set(obj,30,50);
    //set(&obj,obj,5);
    cout << "After passing by value " <<"a : "<<obj.m_a<<" b :"<<obj.m_b<<endl;
    obj.set(100,obj);
    cout << "After passing by reference " <<"a : "<<obj.m_a<<" b :"<<obj.m_b<<endl;
    obj.set(&obj,150);
    cout << "After passing by pointer " <<"a : "<<obj.m_a<<" b :"<<obj.m_b<<endl;

    return 0;
}




