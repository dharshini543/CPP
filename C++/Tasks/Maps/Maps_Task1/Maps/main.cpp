#include <iostream>
#include "Student.h"
#include <list>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    Student student(1, "Dharshini", 2);
    cout << student << endl;

    cout << "***** Unordered Map *****" << endl;
    unordered_map<int, Student> unorderedMap ={
         {1, Student(1, "Dharshini", 2)},
         {2, Student(2, "Pallavi", 3)}};

    cout << unorderedMap;

    cout << "***** Set *****" << endl;
    set<Student> studentSet ={
         Student(1, "Dharshini", 2),
         Student(2, "Likhitha", 3),
         Student(3, "Pallavi", 4)};
    cout << studentSet;

    cout << "***** Unordered Set *****" << endl;
    unordered_set<Student *> studentUnorderedSet;

    studentUnorderedSet.insert(new Student(1, "Dharshini", 2));
    studentUnorderedSet.insert(new Student(2, "Likhitha", 3));
    studentUnorderedSet.insert(new Student(3, "Pallavi", 4));

    cout << studentUnorderedSet;

    cout << "Hello World!" << endl;
    return 0;
}
