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
    virtual ~Base();

    string getName() const;

    virtual void addChild(Base* child) = 0;
    virtual void print() const = 0;
    virtual vector<string> findChild(const string& name) = 0;
    virtual void getMe() const;

protected:
    string m_name;
    vector<Base*> children;


};

#endif



