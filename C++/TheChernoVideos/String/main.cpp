#include <iostream>

using namespace std;
void printString(const std::string& string)
{
    cout<<string<<endl;
}

int main()
{
    // string name = "likhitha";
    // name += "hello";

    string name = string("Hello")+" Dharshini";
    bool contains = name.find("rsh")!= string::npos;
    cout<<contains<<endl;
    cout<<name.size()<<endl;

    cout << "Hello World!" << endl;
    return 0;
}
