#ifndef ENTITY_H
#define ENTITY_H
#include<string>
using namespace std;

class Entity
{
private:
    string m_name;
public:
    Entity();
    Entity(const string& name);
    const string& getName() const;
};


#endif // ENTITY_H
