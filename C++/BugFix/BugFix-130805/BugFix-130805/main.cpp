#include <QApplication>
#include "FontSizeAdjustmentDemo.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    FontSizeAdjustmentDemo window;
    window.show();

    return app.exec();
}
