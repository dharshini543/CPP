#ifndef OFFICE_H
#define OFFICE_H

#include "Base.h"

class Office : public Base
{
public:
    Office(const string& name);
    ~Office();

    void addChild(Base* child) override;
    void print() const override;
    vector<string> findChild(const string& name) override;
    void getMe() const override;
};

#endif

