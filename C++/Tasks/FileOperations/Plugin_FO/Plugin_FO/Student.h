#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

class Student
{
    string m_name;
    int m_age;
    int m_USN;
    int m_mobile;
public:
    Student();
    Student(string name, int age, int USN, int Mobile);
    string getName();
    int getAge();
    int getUSN();
    int getMobile();
    ~Student();
};

#endif // STUDENT_H
