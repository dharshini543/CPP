#include <iostream>
using namespace std;
template<typename T>
void print(T value)
{
    cout<<value<<endl;
}

template<int N>
class Array
{
public:
    int getSize()
    {
        return N;
    }

private:
    int m_array[N];
};

int main()
{
    print(6);
    print("Hello");
    print(6.6);
    cout << "Hello World!" << endl;

    Array<5>array;
    cout<<array.getSize()<<endl;
    return 0;
}
