#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDate>
#include <QDebug>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    QDate date(2025, 8, 1); // August 1, 2025
    qDebug() << "C++ QDate:" << date;  // Should show 2025-08-01

    engine.rootContext()->setContextProperty("myDate", date);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

// #include <QGuiApplication>
// #include <QQmlApplicationEngine>

// int main(int argc, char *argv[])
// {
//     QGuiApplication app(argc, argv);
//     QQmlApplicationEngine engine;
//     engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
//     if (engine.rootObjects().isEmpty())
//         return -1;
//     return app.exec();
// }
