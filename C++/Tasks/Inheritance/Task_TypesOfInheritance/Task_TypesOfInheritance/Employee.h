#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{    
public:
    string m_name;
    int m_age;
    string m_emplyeeID;

    Employee();
    ~Employee();
    void display();

};

#endif // EMPLOYEE_H
