#ifndef LINEITEM_H
#define LINEITEM_H

#include <QQuickItem>

class LineItem : public QQuickItem
{
    Q_OBJECT
public:
    LineItem();

protected:
    QSGNode *updatePaintNode(QSGNode *oldNode, UpdatePaintNodeData *) override;
};

#endif // LINEITEM_H
