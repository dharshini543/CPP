#include <iostream>
#include<thread>

using namespace std;
void search()
{
    for(int i = 0; i < 1000; i++)
    {
        cout<<"search function called "<<i<<endl;
    }
}
void Find()
{
    for(int i = 0; i < 1000; i++)
    {
        cout<<"find function called "<<i<<endl;
    }
}
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    search();
    Find();
    // thread t1(search);
    // cout<<"Hello world"<<endl;
    // thread t2(Find);
    // cout<<"Hiii"<<endl;
    // t1.join();
    // t2.join();
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout<<"Execution time:"<<duration.count()<<endl;

    return 0;
}
