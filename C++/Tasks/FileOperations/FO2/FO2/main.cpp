#include <iostream>
#include"Student.h"
#include<fstream>
using namespace std;

int main()
{
    Student S[3];

    ofstream outf("student.txt");

    cout << "Enter 3 student details" << endl;
    for (int i = 0; i < 3; i++)
    {
        S[i] = S[i].readData();
        outf << S[i].getID() << ", " << S[i].getName() << ", " << S[i].getUSN() << ", " << S[i].getMobile() << endl;
    }
    outf.close();

    ifstream inf("student.txt");

    cout << "Reading data from file:" << endl;
    for (int i = 0; i < 3; i++)
    {
        inf >> S[i];
        cout << "Student " << i + 1 << ": " << S[i].getID() << ", " << S[i].getName() << ", "
             << S[i].getUSN() << ", " << S[i].getMobile() << endl;
    }

    inf.close();
    return 0;
}
