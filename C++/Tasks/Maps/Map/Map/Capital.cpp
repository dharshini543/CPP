#include "Capital.h"
#include <ostream>


ostream& operator<<(ostream& out ,Capital cap)
{
    out<<cap.m_capital<<endl;
    return out;
}
Capital::Capital(string capital)
{
    m_capital = capital;
}
