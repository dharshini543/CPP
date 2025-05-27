#include "Entity.h"

const string& Entity::getName() const
{
    m_DebugCount ++;//it is not possible untill we add keyword mutable to m_DebugCount
    return m_name;
}
