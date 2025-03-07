#include "Student.h"
#include <iostream>

istream& operator >>(istream& inf, Student& s)
{
    string temp;
    getline(inf,s.m_name, ',');
    inf >> s.m_age;
    inf.ignore();
    inf >> s.m_USN;
    inf.ignore();

    inf >> s.m_mobile;

    return inf;
}
Student::Student()
{

}

Student::Student(string name, int age, int USN, int Mobile)
{
    m_name = name;
    m_age = age;
    m_USN = USN;
    m_mobile = Mobile;
}
string Student::getName()
{
    return m_name;
}
int Student::getAge()
{
    return m_age;
}
int Student::getUSN()
{
    return m_USN;
}
int Student::getMobile()
{
    return m_mobile;
}

void Student::setName(string name)
{
    m_name = name;

}

void Student::setAge(int age)
{
    m_age = age;
}

void Student::setUSN(int USN)
{
    m_USN = USN;
}

void Student::setMobile(int Mobile)
{
    m_mobile = Mobile;
}
Student::~Student()
{

}
