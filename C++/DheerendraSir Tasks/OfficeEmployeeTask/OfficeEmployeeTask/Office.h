#ifndef OFFICE_H
#define OFFICE_H

#include <vector>
#include "Employee.h"
using namespace std;

class Office
{
public:
    Office(const string &name);
    ~Office();

    void addEmployee(Employee* emp);
    void print();
private:
    vector<Employee*> employees;
    string m_officeName;
};

#endif // OFFICE_H
