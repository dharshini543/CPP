#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "Book.h"
#include "Student.h"
#include<string>

using namespace std;

class Librarian
{
public:
    Librarian(string name, int ID);
    ~Librarian();
    list<Student *> issueBook(Student& student, Book* book, list<Student*> &studentlist);
private:
    string m_name;
    int m_ID;
};

#endif // LIBRARIAN_H
