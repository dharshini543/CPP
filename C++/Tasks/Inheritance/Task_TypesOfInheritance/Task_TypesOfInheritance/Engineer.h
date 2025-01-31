#ifndef ENGINEER_H
#define ENGINEER_H
#include "Employee.h"

#include <string>
using namespace std;

class Engineer:virtual public Employee
{    
public:
    int m_teamsize;
    string m_department;
    Engineer();
    ~Engineer();
    void display();

};

#endif // ENGINEER_H
