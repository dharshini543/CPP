#ifndef GRANDPARENT_H
#define GRANDPARENT_H

#include <string>
using namespace std;

class grandparent
{
public:
    int m_phnum;
    string m_name;
    int m_age;
    grandparent(string g_name,int g_age,int g_phonum);
    ~grandparent();
};

#endif // GRANDPARENT_H
