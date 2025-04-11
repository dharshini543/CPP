#ifndef STUDENT_H
#define STUDENT_H
#include "Book.h"
#include <list>
#include <string>
using namespace std;

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
    void requestBook(string bookName);

private:
    string m_studentName;
    string m_studentDepartment;
    int m_studentID;
    list<Book*> m_borrowedBooks;

};

#endif // STUDENT_H
