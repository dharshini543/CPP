#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    int ID,USN,Mobile;
    ofstream outf("student.txt",ios::app);
    cout<<"Enter Student ID"<<endl;
    cin>>ID;
    cout<<"Enter Student name"<<endl;
    cin>>name;
    cout<<"Enter Student USN"<<endl;
    cin>>USN;
    cout<<"Enter Student MobileNum"<<endl;
    cin>>Mobile;

    outf<<ID<<","<<name<<","<<USN<<","<<Mobile<<endl;
    outf.close();

    ifstream inf("student.txt");
    inf>>ID;
    inf>>name;
    inf>>USN;
    inf>>Mobile;
    cout<<ID<<name<<USN<<Mobile<<endl;
    inf.close();

    return 0;
}
