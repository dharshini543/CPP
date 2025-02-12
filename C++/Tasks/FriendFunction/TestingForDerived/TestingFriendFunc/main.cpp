namespace PThinks
{
class Employee
{
public:
    int age;
};
}

namespace Benz
{
class Employee
{
public:
    float salary;
};
}

//#include<iostream>

int main()
{
    PThinks::Employee E1;
    E1.age = 25;
    Benz::Employee E;
    E.salary =75000;
    /*std::string str1 = "Dharshini";
    std::string str2 = "Pallavi";
    std::string str3 = str1 + str2;
    std::cout<<str3<<std::endl;*/
}

