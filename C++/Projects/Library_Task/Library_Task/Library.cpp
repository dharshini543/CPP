#include "Library.h"
#include <iostream>

Library::Library()
{
    cout<<"Library Constructor"<<endl;
}

Library::~Library()
{
    cout<<"Library Destructor"<<endl;
}

void Library::addBook()
{

}

void Library::select()
{
    int input;
    while(1)
    {
        cout<<"Enter "<<endl<<"1. ADD BOOK"<<endl<<"2. ISSUE BOOK"<<endl<<"3. DISPLAY BOOK LIST"<<endl<<"4. DISPLAY STUDENT LIST"<<endl<<"5. Exit"<<endl;
        cin>>input;
        switch(input)
        {
        case 1:
            m_bookList = m_librarian.addBook(m_bookList);
            break;
        case 2:
            m_bookList = m_librarian.isuueBook(m_bookList);
            break;
        case 3:
            m_librarian.displayBookList(m_bookList);
            break;
        case 4:
            m_librarian.displayStudentList();
            break;
        case 5:
            exit(0);
        default:
            cout<<"Invalid input"<<endl;
        }
    }
}
