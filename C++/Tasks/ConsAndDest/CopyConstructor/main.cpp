#include <iostream>
using namespace std;

class Student
{
public:
    Student();
    Student(const Student &);
    ~Student();
    int * a;
};
Student::Student()
{
    cout<<"Constructor called"<<endl;
}
Student::Student(const Student &S1)
{
    cout<<"Copy constructor"<<endl;
    a = new int(*S1.a);
}
Student::~Student()
{
    cout<<"Destructor called"<<endl;
}
int main()
{
    Student S1;
    S1.a = new int;
    *S1.a = 25;
    Student S2 = S1;
    cout <<(*S1.a)<< endl;
    delete S2.a;
    cout <<(*S1.a)<< endl;
    cout<<"Before returning"<<endl;
    return 0;
}
