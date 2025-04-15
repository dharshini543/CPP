#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H
#include "Student.h"
#include <list>
using namespace std;

class StudentRecord
{
public:
    StudentRecord(Student &student);
    ~StudentRecord();
    void display();

private:
    list<Student*> m_studentList;
};

#endif // STUDENTRECORD_H
