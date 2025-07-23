#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "EventLogger.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    EventLogger logger;
    engine.rootContext()->setContextProperty("eventLogger", &logger);

    engine.loadFromModule("qml-136598", "Main");

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
