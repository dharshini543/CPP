#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    int x;
    int y;
    int speed;
    Player();
    void move(int xa, int ya);
};

#endif // PLAYER_H
