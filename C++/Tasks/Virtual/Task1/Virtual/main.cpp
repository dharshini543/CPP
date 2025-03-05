#include <iostream>

using namespace std;
class B
{
private:
    //int y;
public:
    virtual void displayfunction()
    {

    }
    virtual void display()
    {

    }
};

class A
{
private:
    int a;
public:
    virtual void display()
    {

    }
};

int main()
{
    B b;
    A a;
    cout <<sizeof(b)<< endl;
    cout <<sizeof(a)<< endl;

    return 0;
}
