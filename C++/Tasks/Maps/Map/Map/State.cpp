#include "State.h"
#include <ostream>

ostream& operator<<(ostream& out ,State state)
{
    out<<state.m_state<<endl;
    return out;
}
State::State(string state)
{
    m_state = state;
}
bool State:: operator<(const State& other) const
{
    return m_state<other.m_state;
}
