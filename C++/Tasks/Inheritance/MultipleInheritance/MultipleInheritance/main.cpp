#include <iostream>
#include "SmartPhone.h"

using namespace std;

int main()
{
    SmartPhone obj(50, "qwertyu", "123456");
    obj.TakeaPhoto();
    obj.phone::display();
    obj.Camera::display();
    obj.Music::display();
    obj.makeAcall();
    obj.playMusic();
    return 0;
}
