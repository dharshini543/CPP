#include "Office.h"
#include "Employee.h"
#include<iostream>
using namespace std;

int main()
{
    Office office("pthinks");

    Employee Dharshini("Dharshini", &office);
    Employee Likitha("Likitha", &office);
    Employee Pallavi("Pallavi", &Likitha);
    Employee Varshini("Varshini", &Likitha);

    //office.print();

    Base& object = office;
    object.getMe();

    vector<string> matches = office.findChild("Likitha");
    cout <<endl<< "Matched names: " << endl;
    for (const auto& name : matches)
    {
        cout << "  " << name << endl;
    }



    return 0;
}


