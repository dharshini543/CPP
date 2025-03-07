#ifndef TXT_H
#define TXT_H
#include"File_operations.h"
#include<list>
#include"StudentManager.h"

class TXT:public File_operations
{
public:
    TXT();
    void writeData(list<Student> student);
    list<Student> readData();
    friend istream& operator>>(istream& in, Student& s);

    ~TXT();
};

#endif // TXT_H
