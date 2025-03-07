#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <list>
#include"Student.h"
using namespace std;
enum
{
    txt_file = 1,
    csv_file
};
class File_operations;
class StudentManager
{
    File_operations* m_fp;
    list<Student> m_student;
public:
    StudentManager();
    void initStudent(list<Student> student);
    void userInput();
    void display();
    ~StudentManager();
};

#endif // STUDENTMANAGER_H
