#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H
#include <list>
using namespace std;
#include"StudentManager.h"

class File_operations
{
public:
    File_operations();
    virtual void writeData(list<Student> student) = 0;
    virtual list<Student> readData() = 0;
    virtual ~File_operations();
};

#endif // FILE_OPERATIONS_H
