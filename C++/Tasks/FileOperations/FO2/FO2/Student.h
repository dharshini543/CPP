#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
    int m_ID;
    string m_name;
    int m_USN;
    int m_mObileNum;
public:
    Student();
    Student readData();
    int getID();
    string getName();
    int getUSN();
    int getMobile();
    friend istream& operator>>(istream& in, Student& s);
};

#endif // STUDENT_H
