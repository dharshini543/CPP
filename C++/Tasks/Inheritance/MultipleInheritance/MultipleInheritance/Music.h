#ifndef MUSIC_H
#define MUSIC_H

#include <string>
using namespace std;

class Music
{
public:
    string m_songName;
    Music(string songName);
    ~Music();
    void display();
    void playMusic();
};

#endif // MUSIC_H
