#ifndef ENTITY_H
#define ENTITY_H

#include<string>
using namespace std;

class Entity
{
private:
    string m_name;
    mutable int m_DebugCount =0;
public:
    const string& getName() const;

};


#endif // ENTITY_H
