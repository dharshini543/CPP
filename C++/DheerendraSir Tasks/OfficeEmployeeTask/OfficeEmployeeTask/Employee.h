#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Base.h"

class Employee : public Base
{
public:
    Employee(const string &name, Base* parent);
    ~Employee();

    void addChild(Base* child) override;
    void print() const override;
    vector<string> findChild(const string& name) override;
    void getMe() const override;

private:
    Base* Ptr;

};

#endif



