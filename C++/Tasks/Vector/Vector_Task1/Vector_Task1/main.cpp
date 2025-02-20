#include <iostream>
#include<vector>
#include<list>
using namespace std;

void show(vector<std::string> &Vector1)
{
    vector<std::string>::iterator p;
    for(p = Vector1.begin();p != Vector1.end();++p)
    {
        cout<<*p<<endl;
    }
}

int main()
{
    vector<std::string>Vector1;
    Vector1.push_back("abc");
    Vector1.push_back("def");
    Vector1.push_back("ghi");
    Vector1.push_back("lmn");
    Vector1.push_back("opq");
    Vector1.pop_back();
    Vector1.push_back("xyz");

    for(std::string str: Vector1)
    {
        cout<<str<<endl;
    }
    Vector1.insert(Vector1.begin()+0,"a");
    for(int i = 0;i < size(Vector1);i++)
    {
        cout<<Vector1[i]<<endl;
    }
    for(int i = 0;i < size(Vector1);i++)
    {
        cout<<&Vector1[i]<<endl;
    }
    show(Vector1);
    cout<<size(Vector1)<<endl;
    cout<<sizeof(std::string)<<endl;
    /*Vector1.clear();
    cout<<size(Vector1)<<endl;*/

    vector<int> vect;
    vect.push_back(1);
    /*vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(6);
    vect.push_back(7);*/
    cout<<sizeof(vect)<<endl;
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    cout<<sizeof(list1)<<endl;
    cout<<size(list1)<<endl;



    return 0;
}
