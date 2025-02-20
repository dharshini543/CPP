#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <unordered_map>
#include <set>
#include <unordered_set>

using namespace std;
#include <ostream>

class Student
{
    int m_rollNumber;
    string m_fullName;
    int m_year;

public:
    Student();
    Student(int rollNumber, string fullName, int year);
    ~Student();

    friend ostream &operator<<(ostream &out, const Student &student);

    int getRollNumber() const;
    string getFullName() const;
    int getYear() const;

    bool operator<(const Student &other) const
    {
        return m_rollNumber < other.m_rollNumber;
    }
};

template <typename K, typename V>
ostream &operator<<(ostream &out, const unordered_map<K, V> &unorderedmap)
{
    for (const auto &pair : unorderedmap)
    {
        out << pair.first << " -> Roll Number: " << pair.second.getRollNumber()
        << ", Name: " << pair.second.getFullName()
        << ", Year: " << pair.second.getYear() << endl;
    }

    return out;
}

template <typename V>
ostream &operator<<(ostream &out, const set<V> &dataset)
{
    for (const auto &element : dataset)
    {
        out << "Roll Number: " << element.getRollNumber()
        << ", Name: " << element.getFullName()
        << ", Year: " << element.getYear() << endl;
    }

    return out;
}

template <typename V>
ostream &operator<<(ostream &out, const unordered_set<V *> &dataset)
{
    for (const auto &element : dataset)
    {
        out << "Roll Number: " << element->getRollNumber()
        << ", Name: " << element->getFullName()
        << ", Year: " << element->getYear() << endl;
    }
    return out;
}

#endif // STUDENT_H
