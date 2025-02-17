#include <iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    list<int>list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_front(5);
    list1.pop_back();
    list1.push_front(7);
    list1.pop_front();

    for(int i:list1)
    {
        cout<<i<<endl;
    }
    /*for(int i = 0;i <size(list1);i++)
    {
        cout<<list1<<endl;
    }*/

    vector<std::string>Vector1;
    Vector1.push_back("abc");
    Vector1.push_back("def");
    Vector1.push_back("ghi");
    Vector1.push_back("lmn");
    Vector1.push_back("opq");
    Vector1.pop_back();

    for(std::string str: Vector1)
    {
        cout<<&str<<endl;
    }
    for(int i = 0;i < size(Vector1);i++)
    {
        cout<<Vector1[i]<<endl;
    }
    for(int i = 0;i < size(Vector1);i++)
    {
        cout<<&Vector1[i]<<endl;
    }

    return 0;
}
