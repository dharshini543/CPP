#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "Book.h"
#include "StudentRecord.h"
#include<string>
using namespace std;

class Librarian
{
public:
    Librarian(string name, int ID);
    ~Librarian();
    Book* searchBookByName(list<Book*>& bookList, string bookName);
    void issueBook(Student& student, Book* book, list<StudentRecord *>& studentRecord);
    void addStudentDetails(Student &student, list<StudentRecord *>& studentRecord);

private:
    string m_name;
    int m_ID;
};

#endif // LIBRARIAN_H
