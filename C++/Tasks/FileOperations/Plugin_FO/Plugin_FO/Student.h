#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

class Student
{


public:
    string m_name;
    int m_age;
    int m_USN;
    int m_mobile;
    Student();
    Student(string name, int age, int USN, int Mobile);
    string getName();
    int getAge();
    int getUSN();
    int getMobile();
    void setName(string name);
    void setAge(int age);
    void setUSN(int USN);
    void setMobile(int Mobile);
    ~Student();
};

#endif // STUDENT_H
