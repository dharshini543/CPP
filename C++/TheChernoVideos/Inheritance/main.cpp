#include "Player.h"
#include <iostream>

using namespace std;


int main()
{
    cout<<sizeof(Player)<<endl;
    Player player;
    player.move(5,5);
    cout << "Hello World!" << endl;
    return 0;
}
