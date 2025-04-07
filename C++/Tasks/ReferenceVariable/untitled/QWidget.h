#ifndef QWIDGET_H
#define QWIDGET_H

#include <QObject>
#include <QPaintDevice>

class QPaintEvent;
class QWidget:public QObject,public QPaintDevice
{
public:
    QWidget();
    ~QWidget();

    virtual void paintEvent(QPaintEvent *event);
};

#endif // QWIDGET_H
