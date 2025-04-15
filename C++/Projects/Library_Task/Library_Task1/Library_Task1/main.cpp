#include "Library.h"
#include "Student.h"

using namespace std;

int main()
{
    Librarian librarian("XYZ",1);
    Library library(&librarian);
    library.addBook("C++", "Balagurusamy", 100,"Available");
    library.addBook("C", "DennisRitchie", 101, "Available");

    Student student("Dharshini", "Civil", 1);
    library.studentEntryToBorrowBook(student);
    return 0;
}
