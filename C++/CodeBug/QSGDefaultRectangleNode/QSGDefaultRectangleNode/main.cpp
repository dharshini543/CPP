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
            node = window()->createRectangleNode();  // returns QSGDefaultRectangleNode internally

        node->setRect(0, 0, width(), height());
        node->setColor(Qt::red);

        // Verify if bug exists
        QColor color = node->color();
        if (!color.isValid())
            qWarning() << "❌ BUG: color() is INVALID after setColor()!";
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
    engine.loadData(R"(
        import QtQuick 2.15
        import QtQuick.Window 2.15
        import Test 1.0

        Window {
            visible: true
            width: 300
            height: 300
            MyRectangleItem {
                anchors.fill: parent
            }
        }
    )");

    return app.exec();
}
