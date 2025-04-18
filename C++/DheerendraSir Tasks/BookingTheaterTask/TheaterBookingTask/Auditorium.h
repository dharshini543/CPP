#ifndef AUDITORIUM_H
#define AUDITORIUM_H
#include <string>
using namespace std;

class Auditorium
{
public:
    Auditorium(int number, string name, int capacity);
    ~Auditorium();
    string getName();
    int getNumber();

private:
    int m_auditoriumNumber;
    string m_auditoriumName;
    int m_auditoriumCapacity;
};

#endif // AUDITORIUM_H
