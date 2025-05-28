#include <iostream>
using namespace std;


class Entity
{
private:
    string m_name;
public:
    Entity() : m_name("Unkown"){}
    Entity(const string& name) : m_name(name){}
    const string& getName() const {return m_name;}
};

int main()
{
    int a =2;
    int *b = new int[50];
    Entity* e = new Entity();

    *b =20;
    cout<<a<<" "<<*b<<endl;
    delete []b;
    delete e;
    return 0;
}
