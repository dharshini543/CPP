#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickItem>
#include <QQuickWindow>
#include <QSGRectangleNode>
#include <QDebug>

class MyRectangleItem : public QQuickItem
{
    Q_OBJECT
public:
    MyRectangleItem() {
        setFlag(ItemHasContents, true);
    }

protected:
    QSGNode *updatePaintNode(QSGNode *oldNode, UpdatePaintNodeData *) override {
        QSGRectangleNode *node = static_cast<QSGRectangleNode *>(oldNode);
        if (!node)
            node = window()->createRectangleNode();  // Internally QSGDefaultRectangleNode

        node->setRect(0, 0, width(), height());
        node->setColor(Qt::red);

        // Test the bug
        QColor color = node->color();
        if (!color.isValid())
            qWarning() << "❌ BUG: color() returned INVALID!";
        else
            qDebug() << "✅ color() returned:" << color;

        return node;
    }
};

#include "main.moc"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<MyRectangleItem>("Test", 1, 0, "MyRectangleItem");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;
    return app.exec();
}
