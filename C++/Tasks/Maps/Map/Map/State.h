#ifndef STATE_H
#define STATE_H
#include <string>
using namespace std;
class State
{
public:
    string m_state;
    State(string state);
    bool operator<(const State& other)const;
    friend ostream& operator<<(ostream&,State);
};

#endif // STATE_H
