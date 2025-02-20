#include "Student.h"


Student::Student(int rollnum, string name, string branch)
{
    m_rollnum = rollnum;
    m_name = name;
    m_branch = branch;

}
ostream & operator<<(ostream &out,Student S)
{
    out<<S.m_rollnum<<endl<<S.m_name<<endl<<S.m_branch<<endl;
    return out;
}
