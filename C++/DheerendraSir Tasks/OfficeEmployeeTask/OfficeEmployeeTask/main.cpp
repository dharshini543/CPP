#include "Office.h"
#include "Employee.h"
#include<iostream>
using namespace std;

int main()
{
    Office office("PthinkS");
    Employee dharshini("Dharshini", &office);
    Employee likitha("Likitha", &office);
    Employee pallavi("Pallavi", &likitha);
    Employee varshini("Varshini", &likitha);

    office.print();
    office.getMe();

    vector<Base*> matches = office.findChild("Dharshini");

    if (matches.empty())
    {
        cout <<endl<< "No matching names found."<<endl<<endl;
    }
    else
    {
        cout <<endl<< "Matched names: " << endl;
        for (auto& name : matches)
        {
            cout << "  " << name->getName() << endl<<endl;
        }
    }

    return 0;
}


