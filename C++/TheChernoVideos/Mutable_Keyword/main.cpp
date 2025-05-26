#include <iostream>

using namespace std;
    //mutable we can change value of variable even in const fun;
//we use mutable in two cases 1.const functions 2. lambda expressions.
class Entity
{
private:
    string m_name;
    mutable int m_DebugCount =0;
public:
    const string& getName() const
    {
        m_DebugCount ++;//it is not possible untill we add keyword mutable to m_DebugCount
        return m_name;
    }

};

int main()
{
    const Entity e;
    e.getName();

    int x =0;
    auto f =[=]()mutable
    {

        x++;
        cout<<x<<endl;
        cout<<"Hello"<<endl;
    };
    f();
    cout << "Hello World!" << endl;
    return 0;
}
