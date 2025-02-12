#include <iostream>

using namespace std;

int main()
{
    int array[4] = {10,20,90,5};
    int Min = array[0],Max = array[0];

    for(int i = 0; i <= 3 ; i++)
    {
        if(array[i] < Min)
        {
             Min = array[i];
        }
    }
    cout<<"Min Value :"<<Min<<endl;

    for(int i = 0; i <= 3 ; i++)
    {
        if(array[i] > Max)
        {
            Max = array[i];

        }
    }
    cout<<"Max Value :"<<Max<<endl;


    return 0;
}
