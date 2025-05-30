#include <iostream>

using namespace std;

class A
{
private:
    int m_a;
protected:
    int m_b;
public:
    int m_c;
};

class B:public A
{

};

int main()
{
    cout << sizeof(A)<< endl;
    cout << sizeof(B)<< endl;
    return 0;
}
