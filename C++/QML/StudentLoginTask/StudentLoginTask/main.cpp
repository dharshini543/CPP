#include "LoginHandler.h"
#include "SignUpHandler.h"
#include "StudentManager.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    StudentManager* manager = new StudentManager;

    SignUpHandler signUphandler(manager);
    LoginHandler loginHandler(manager);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("signupHandler", &signUphandler);
    engine.rootContext()->setContextProperty("loginHandler", &loginHandler);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
