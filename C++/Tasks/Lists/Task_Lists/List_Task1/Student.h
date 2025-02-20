#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;

class Student
{
    int m_rollnum;
    string m_name;
    string m_branch;
public:
    Student(int rollnum,string name,string branch);
    friend ostream & operator <<(ostream &, Student);
};

#endif // STUDENT_H
