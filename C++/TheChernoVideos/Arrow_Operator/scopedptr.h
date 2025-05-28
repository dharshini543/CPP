#ifndef SCOPEDPTR_H
#define SCOPEDPTR_H
#include "entity.h"

class ScopedPtr
{
public:
    ScopedPtr();
    ScopedPtr(Entity* entity);
    ~ScopedPtr();
    Entity* operator ->();


private:
    Entity* m_entity;
};

#endif // SCOPEDPTR_H
