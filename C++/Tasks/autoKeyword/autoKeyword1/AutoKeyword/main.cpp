#include <iostream>

using namespace std;

class A
{
    //auto a = 10;
    //static int b = 10;
public:
    auto add();
};

auto add(int c)
{
    c = 15;
    return c;
}
int main()
{
    auto a = 10;
    a = add(a);
    cout <<a<< endl;
    return 0;
}
