#ifndef AUDITORIUM_H
#define AUDITORIUM_H
#include<string>
using namespace std;

class Auditorium
{
public:
    Auditorium(string name,string status);
    ~Auditorium();
    string getName();
    string getStatus();

private:
    string m_auditoriumName;
    string m_auditoriumStatus;
};

#endif // AUDITORIUM_H
