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
            node = window()->createRectangleNode();

        node->setRect(0, 0, width(), height());
        node->setColor(Qt::red);  // Set color

        // Verify whether color() returns the correct value
        QColor actualColor = node->color();
        if (!actualColor.isValid()) {
            qWarning() << "❌ BUG: color() returned INVALID!";
        } else {
            qDebug() << "✅ color() returned:" << actualColor;
        }

        return node;
    }
};

#include "main.moc"
