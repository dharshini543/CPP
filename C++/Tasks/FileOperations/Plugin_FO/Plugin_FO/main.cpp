#include"StudentManager.h"
using namespace std;

int main()
{
    StudentManager SM;
    list<Student> student;
    for(int i = 0; i < 10;i++)
    {
        student.push_back(Student("D",25,1234,98745));
    }
    SM.initStudent(student);

    return 0;
}
