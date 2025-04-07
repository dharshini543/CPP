#ifndef QPUSHBUTTON_H
#define QPUSHBUTTON_H

#include <QAbstractButton>

class QPushButton : public QAbstractButton
{
public:
    QPushButton(QAbstractButton *parent);
    ~QPushButton();
};

#endif // QPUSHBUTTON_H
