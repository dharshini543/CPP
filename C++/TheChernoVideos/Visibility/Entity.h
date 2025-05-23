#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
private:
    int m_x,m_y;
    void printprivate();
protected :
    int m_a;
    void printProtected();
public:
    int m_z;
    void printPublic();
public:
    Entity();
};

#endif // ENTITY_H
