#include "Entity.h"

Entity::Entity() : m_name("Unkown")
{

}
Entity::Entity(const string& name) : m_name(name)
{

}
const string& Entity::getName() const
{
    return m_name;
}
