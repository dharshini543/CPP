#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int var = 8;
    int* ptr = &var;
    *ptr = 10;
    cout << *ptr << endl;

    char* buffer = new char[8];
    memset(buffer, 0, 8);

    char** ptr1 = &buffer;
    delete[] buffer;
    return 0;
}
