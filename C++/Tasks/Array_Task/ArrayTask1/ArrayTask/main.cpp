#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size,zeroCount = 0;
    cout << "Enter size of array" << endl;
    cin>>size;
    int array1[size];
    int array2[size];
    cout << "Enter array elements" << endl;
    for(int i = 0; i < size;i++)
    {
        if(array1[i] == 0)
        {
            cin>>array1[i];
        }
        else
        {
            cin>>array2[i];
        }
    }
    for(int i = array2[i]; i < ;i++)
    {
        cout<<array2[i]<<endl;
    }
    for(int i = array1[i]; i < '\0';i++)
    {
        cout<<array1[i]<<endl;
    }
    return 0;
}
