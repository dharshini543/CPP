#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(int age,int phnum)
{
    m_age = new int;
    *m_age = age;
    m_phonenum = new int;
    *m_phonenum = phnum;
    printMe();

}

void Student ::printMe()
{
    cout<<"Age :"<<*m_age<<endl;
    cout<<"Phno:"<<*m_phonenum<<endl;
}
