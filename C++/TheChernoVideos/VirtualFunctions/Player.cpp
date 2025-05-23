#include "Player.h"

Player::Player(const string& name) : m_name(name)
{

}
string Player:: getName()
{
    return m_name;
}
