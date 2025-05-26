#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
using namespace std;

class Office;
class Employee
{
public:
    Employee(const string& name, Office* office);
    Employee(const string& name, Employee* emp);
    ~Employee();

    string getName();
    void print();
    void addChild(Employee* child);

private:
    string m_employeeName;
    Office* officePtr;
    Employee* empPtr;
    vector<Employee*> children;
};

#endif // EMPLOYEE_H
