#include <QApplication>
#include <QMainWindow>
#include <QQuickWidget>
#include <QQmlEngine>
#include "lineitem.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<LineItem>("Custom", 1, 0, "LineItem");

    QMainWindow window;

    QQuickWidget *quickWidget = new QQuickWidget;
    quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

    quickWidget->setSource(QUrl("data:text/plain,"
                                "import QtQuick 2.15;"
                                "import Custom 1.0;"
                                "Rectangle { width: 400; height: 300; LineItem { anchors.fill: parent } }"
                                ));

    window.setCentralWidget(quickWidget);
    window.resize(400, 300);
    window.setWindowTitle("Qt6 Line Drawing Test");
    window.show();

    return app.exec();
}
