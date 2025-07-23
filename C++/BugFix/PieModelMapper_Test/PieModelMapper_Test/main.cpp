#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Add custom import path for QtGraphs QML module
    engine.addImportPath("/home/dharshini-t-r/QtSource/qt6/qt6-build/qtbase/qml");

    // Handle component creation failure
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

    // Load the QML file
    engine.load(QUrl(QStringLiteral("qrc:/qt/qml/PieModelMapper_Test/Main.qml")));

    return app.exec();
}
