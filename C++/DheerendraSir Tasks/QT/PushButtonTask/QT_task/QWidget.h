#ifndef QWIDGET_H
#define QWIDGET_H
#include <QObject>
class QWidget : public QObject
{
    Q_OBJECT
public:
    explicit QWidget(QObject *parent = nullptr);

signals:
};

#endif // QWIDGET_H
