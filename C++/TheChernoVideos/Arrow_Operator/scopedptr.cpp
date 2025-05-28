#include "scopedptr.h"

ScopedPtr::ScopedPtr()
{
    cout<<"Scoped Constructor"<<endl;
}

ScopedPtr::ScopedPtr(Entity* entity)
{
    m_entity = entity;
}

ScopedPtr::~ScopedPtr()
{
    cout<<"Scoped Destructor"<<endl;
    delete m_entity;

}

Entity *ScopedPtr::operator ->()
{
    return m_entity;
}
