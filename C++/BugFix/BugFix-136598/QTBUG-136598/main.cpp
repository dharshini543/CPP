#include <QApplication>
#include <QMainWindow>
#include "HoverTestWidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    auto *testWidget = new HoverTestWidget;
    testWidget->setFixedSize(250, 100);
    testWidget->setEnabled(false);

    window.setCentralWidget(testWidget);
    window.resize(400, 300);
    window.show();

    return app.exec();
}
