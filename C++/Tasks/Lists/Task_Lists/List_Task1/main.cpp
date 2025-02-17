#include <iostream>
#include<list>
using namespace std;

class Student
{
    public:
    int m_rollNum;
    string m_name;
    string m_branch;
};

int main()
{
    Student S1;
    list<Student>list1;
    list1.push_back(S1);

    S1.m_rollNum = 21;
    S1.m_name = "Dharshini";
    S1.m_branch = "Civil";

    cout <<S1.m_rollNum << endl;
    cout <<S1.m_name << endl;
    cout <<S1.m_branch << endl;

    return 0;
}
