#ifndef DESTRUCTOR_H
#define DESTRUCTOR_H

class Entity
{
public:
    float m_x,m_y;
    Entity();
    Entity(int x ,int y);
    ~Entity();
    void print();

};
#endif // DESTRUCTOR_H
