#include "Library.h"
#include "Student.h"

using namespace std;

int main()
{
    list<Student*> studentList;
    Librarian librarian("XYZ",1);
    Library library(&librarian);
    library.addBook("C++", "Balagurusamy", 100,"Available");
    library.addBook("C", "DennisRitchie", 101, "Available");

    Student student("Dharshini", "Civil", 1);
    student.requestBook("C++");

    library.displayBooks();

    Book* borrowBook = library.searchBookByID(100);
    if(borrowBook != NULL)
    {
        if(borrowBook->getStatus() == "Available")
        {
            studentList = librarian.issueBook(student, borrowBook, studentList);
            borrowBook->setStatus("Issued");
        }
    }
    library.displayBooks();
    library.displayStudentList(studentList);
    return 0;
}
