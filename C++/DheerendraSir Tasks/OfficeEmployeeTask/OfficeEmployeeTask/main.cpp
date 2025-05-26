#include "Office.h"
#include "Employee.h"

using namespace std;

int main()
{
    Office office("pthinks");
    Employee e1("Dharshini", &office);
    Employee e2("Likitha", &e1);
    Employee e3("Pallavi", &e2);


    office.print();

    return 0;
}
