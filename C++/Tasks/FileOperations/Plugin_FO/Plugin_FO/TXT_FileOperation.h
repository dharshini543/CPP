#ifndef TXT_FILEOPERATION_H
#define TXT_FILEOPERATION_H
#include"File_operations.h"
#include<list>
#include"StudentManager.h"

class TXT_FileOperation:public File_operations
{
public:
    TXT_FileOperation();
    void writeData(list<Student> &student);
    list<Student> readData();
    ~TXT_FileOperation();
};

#endif // TXT_FILEOPERATION_H
