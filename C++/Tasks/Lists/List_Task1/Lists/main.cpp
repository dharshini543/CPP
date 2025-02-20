#include <iostream>
#include<list>
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



    return 0;
}
