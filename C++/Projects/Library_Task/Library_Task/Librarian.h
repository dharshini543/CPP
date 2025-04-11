#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "Book.h"
#include "Student.h"
#include <list>
#include<string>
using namespace std;

class Librarian
{
public:
    Librarian();
    ~Librarian();
    list<Book *> isuueBook(list<Book*> bookList);
    list<Book *> addBook(list<Book*> m_bookList);
    void displayBookList(list<Book*> m_bookList);
    void displayStudentList();

private:
    string m_name;
    int m_age;
    list<Student*> m_studentList;

};

#endif // LIBRARIAN_H
