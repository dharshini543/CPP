#include <iostream>

using namespace std;

class Entity
{
public:
    int* example = new int [5];
    Entity()
    {
        for(int i =0;i<=5;i++)
        {
            example[i] =2;
        }
    }
    ~Entity()
    {
        delete[]another;
    }
};

int  main()
{

    Entity e;
    return 0;
}


// int main()
// {
//     int example[5];
//     int* ptr = example;
//     for(int i =0;i<=5;i++)
//     {
//         if(i<0)
//         {
//             example[i] = i*5;
//         }
//         else
//         {
//             example[i] = 2;

//         }
//     }
//     cout<<example[0]<<endl;
//     example[2] = 5;
//     *(ptr+2) =6;
//     cout<<example[2]<<endl;
//     cout<<"Address of array :"<<example<<endl;
//     cout << "Hello World!" << endl;
//     return 0;
// }
