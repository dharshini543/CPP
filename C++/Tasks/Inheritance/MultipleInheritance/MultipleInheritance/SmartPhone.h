#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "Camera.h"
#include "phone.h"
#include "Music.h"

class SmartPhone:public Camera,public phone,public Music
{
public:
    SmartPhone(int s_pixels,string s_songName,string s_phnum);
    ~SmartPhone();
};

#endif // SMARTPHONE_H
