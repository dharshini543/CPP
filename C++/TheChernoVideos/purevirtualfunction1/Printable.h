#ifndef PRINTABLE_H
#define PRINTABLE_H
#include<string>
using namespace std;

class Printable
{
public:
    virtual string GetClassName() =0;
};

#endif // PRINTABLE_H
