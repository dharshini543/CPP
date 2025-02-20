#include "Student.h"

Student::Student() {}

Student::Student(int rollNumber, string fullName, int year)
{
    cout << "Student Constructor Called" << endl;
    m_rollNumber = rollNumber;
    m_fullName = fullName;
    m_year = year;
}

Student::~Student()
{
    cout << "Student Destructor Called" << endl;
}

int Student::getRollNumber() const
{
    return m_rollNumber;
}

string Student::getFullName() const
{
    return m_fullName;
}

int Student::getYear() const
{
    return m_year;
}

ostream &operator<<(ostream &out, const Student &student)
{
    out << "Roll Number = " << student.getRollNumber() << endl;
    out << "Name = " << student.getFullName() << endl;
    out << "Year = " << student.getYear() << endl;
    return out;
}
