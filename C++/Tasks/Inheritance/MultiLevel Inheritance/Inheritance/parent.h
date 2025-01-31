#ifndef PARENT_H
#define PARENT_H
#include "grandparent.h"

class parent: public grandparent
{
public:
    int m_salary;
    parent( int salary, string p_name,int p_age,int p_phnum );
    ~parent();
};

#endif // PARENT_H
