#include "Student.h"

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

Student::~Student()
{

}
