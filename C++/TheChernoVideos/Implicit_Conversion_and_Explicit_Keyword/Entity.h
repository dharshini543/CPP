#ifndef ENTITY_H
#define ENTITY_H
#include<string>
using namespace std;

class Entity
{
private:
    string m_name;
    int m_age;
public:
    explicit Entity(const string& name);
    Entity(int age);
};


#endif // ENTITY_H
