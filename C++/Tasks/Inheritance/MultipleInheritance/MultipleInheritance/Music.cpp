#include "Music.h"
#include <iostream>
using namespace std;
Music::Music(string songName):m_songName(songName)
{
    cout<<"Music constructor called"<<endl;
}
Music::~Music()
{
    cout<<"Music Destructor called"<<endl;
}
void Music::display()
{
    cout<<"Music display"<<endl;
    cout<<"SongName :"<<m_songName<<endl;

}
void Music::playMusic()
{
    cout<<" play Music"<<endl;
}
