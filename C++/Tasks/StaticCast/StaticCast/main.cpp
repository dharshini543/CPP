#include <iostream>

using namespace std;

class base
{
public:
    virtual void fun()
    {
        cout<<"Base"<<endl;
    }
};
class derived:public base
{
public:
    void fun()
    {
        cout<<"derived"<<endl;
    }
};

int main()
{
    base* bptr;
    derived d1,*dptr;
    bptr = &d1;
    bptr->fun();
    dptr= dynamic_cast<derived*> (bptr);
    dptr->fun();

    cout << "Hello World!" << endl;
    return 0;
}
