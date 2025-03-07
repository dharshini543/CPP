#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <list>
#include"Student.h"
using namespace std;
enum
{
    txt = 1,
    csv,
    xml,
    json,
    ui
};
class File_operations;
class StudentManager
{
    File_operations* m_fp;
    list<Student> m_student;
public:
    StudentManager();
    void initStudent(list<Student> student);
    void selectFile();
    void display();
    ~StudentManager();
};

#endif // STUDENTMANAGER_H
