#ifndef CAPITAL_H
#define CAPITAL_H
#include <string>
using namespace std;

class Capital
{
public:
    string m_capital;
    Capital(string capital);
    friend ostream& operator<<(ostream&,Capital);
};

#endif // CAPITAL_H
