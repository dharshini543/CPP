#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include <string>
using namespace std;

class Manager:virtual public Employee
{
public:
    string m_expertise;
    string m_project;
    Manager();
    ~Manager();
    void display();

};

#endif // MANAGER_H
