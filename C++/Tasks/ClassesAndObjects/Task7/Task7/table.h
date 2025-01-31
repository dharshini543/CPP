#ifndef TABLE_H
#define TABLE_H

#include <string>
using namespace std;

class Table
{
    float m_length;
    float m_width;
    string m_colour;
public:
    Table();
    float m_height;
protected:
    int display();
};

#endif // TABLE_H
