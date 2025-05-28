#include <iostream>
using namespace std;

class Entity{
public:
    Entity()
    {
        cout<<"Created Entity"<<endl;
    }
    ~Entity()
    {
        cout<<"Destroyed Entity"<<endl;
    }
};

class Scopedptr
{
private:
    Entity* m_ptr;
public:
    Scopedptr(Entity* ptr):m_ptr(ptr){
        cout<<"Created Scoped ptr"<<endl;
    }
    ~Scopedptr()
    {
        cout<<"Destroyed Scoped ptr"<<endl;
        delete m_ptr;
    }
};

int main()
{
    {
        //Entity e;
        // Entity* e = new Entity;
        // delete e;
        Scopedptr ptr = new Entity;

    }


    return 0;
}
