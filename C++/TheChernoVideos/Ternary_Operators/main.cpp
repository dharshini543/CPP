#include <iostream>
using namespace std;

static int s_level =1;
static int s_speed =2;

int main()
{
    s_speed=s_level >5?10:5;
    cout<<s_speed<<endl;
    s_speed = s_level > 5 ? s_level > 10 ? 15:10:5;
    cout<<s_speed<<endl;

    string rank =s_level>10?"Master" :"Beginner";
    cout<<rank<<endl;

    return 0;
}
