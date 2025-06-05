#ifndef BASE_H
#define BASE_H
#include<vector>
#include <string>
using namespace std;

class Base
{
public:
    Base();
    Base(const string &name);
    ~Base();

    string getName() const;
    void addChild(Base* child);

    virtual void print() const;
    virtual vector<Base*> findChild(const string& name);
    virtual void getMe() const;

protected:
    string m_name;
    vector<Base*> m_childrens;


};

#endif



