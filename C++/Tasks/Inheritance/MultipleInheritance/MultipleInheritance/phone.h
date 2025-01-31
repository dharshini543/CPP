#ifndef PHONE_H
#define PHONE_H
#include <string>
using namespace std;

class phone
{
public:
    string m_phnum;
    phone(string phnum);
    ~phone();
    void display();
    void makeAcall();
};

#endif // PHONE_H
