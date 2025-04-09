#include "ABC.h"
#include "DBC.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget widget;
    widget.show();

    QObject object;

    //QPaintDevice paintDevice;

    ABC abc;
    abc.show();

    /*DBC dbc;
    dbc.show();*/
    DBC dbc;
    DBC* ptr = static_cast<DBC*>(&dbc);
    ptr->show();

    return a.exec();
}
