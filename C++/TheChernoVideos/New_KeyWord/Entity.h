#ifndef ENTITY_H
#define ENTITY_H
#include<string>

class Entity
{
private:
    std::string m_name;
public:
    Entity();
    Entity(const std::string& name);
    const std::string& getName() const ;
};

#endif // ENTITY_H
