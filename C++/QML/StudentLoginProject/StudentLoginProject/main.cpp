#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "StudentManager.h"
#include "SignUpHandler.h"
#include "LoginHandler.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    StudentManager *manager = new StudentManager;

    SignupHandler signupHandler(manager);
    LoginHandler loginHandler(manager);

    engine.rootContext()->setContextProperty("signupHandler", &signupHandler);
    engine.rootContext()->setContextProperty("loginHandler", &loginHandler);
    // engine.rootContext()->setContextProperty("studentManager", manager);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
