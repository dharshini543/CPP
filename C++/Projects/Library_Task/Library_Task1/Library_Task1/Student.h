#ifndef STUDENT_H
#define STUDENT_H

#include "Book.h"
#include <list>

class Library;
class Student
{
public:
    Student(string studentName,string studentDepartment,int studentID);
    ~Student();
    void borrowBook(Book* book);
    void displayBorrowedBooks();
    string getName();
    string getdepartment();
    int getID();
    string getRequestedBook();

private:
    string m_studentName;
    string m_studentDepartment;
    int m_studentID;
    list<Book*> m_borrowedBooks;

};

#endif // STUDENT_H
