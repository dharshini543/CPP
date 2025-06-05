#include "Office.h"
#include <iostream>


Office::Office(const string &name)
    : Base(name)
{
    cout << "Office constructor for " << m_name << endl;
}

Office::~Office()
{
    cout << "Office destructor for " << m_name << endl;
}




