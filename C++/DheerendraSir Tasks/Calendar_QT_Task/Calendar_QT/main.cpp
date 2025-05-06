#include "PushButton.h"
#include "Widget.h"

#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    MyPushButton button;
    button.show();
    button.setGeometry(500,250,10,50);
    return a.exec();
}
