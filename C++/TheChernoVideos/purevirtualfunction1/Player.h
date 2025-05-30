#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player:public Entity
{
private:
    string m_name;
public:

    Player(const string& name);
    string getName() override;
};

#endif // PLAYER_H
