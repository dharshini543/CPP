#ifndef CSV_FILEOPERATION_H
#define CSV_FILEOPERATION_H
#include"File_operations.h"
#include<list>
#include"StudentManager.h"

class CSV_FileOperation:public File_operations
{
public:
    CSV_FileOperation();
    void writeData(list<Student> &student);
    list<Student> readData();
    ~CSV_FileOperation();
};

#endif // CSV_FILEOPERATION_H
