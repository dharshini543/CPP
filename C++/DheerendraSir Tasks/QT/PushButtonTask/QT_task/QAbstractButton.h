#ifndef QABSTRACTBUTTON_H
#define QABSTRACTBUTTON_H

#include <QWidget>

class QAbstractButton : public QWidget
{
    Q_OBJECT
public:
    explicit QAbstractButton(QWidget *parent = nullptr);

signals:
};

#endif // QABSTRACTBUTTON_H
