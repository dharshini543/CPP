#ifndef AUDITORIUM_H
#define AUDITORIUM_H
#include<string>
using namespace std;

class Auditorium
{
public:
    Auditorium(int ID, string name);
    ~Auditorium();
    string getName();
    int getID();

private:
    int m_auditoriumID;
    string m_auditoriumName;
};

#endif // AUDITORIUM_H
