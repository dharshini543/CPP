#ifndef AUDITORIUM_H
#define AUDITORIUM_H
#include <string>
using namespace std;

class Auditorium
{
public:
    Auditorium(string name);
    ~Auditorium();
    string getName();

private:
    string m_auditoriumName;
};

#endif // AUDITORIUM_H
