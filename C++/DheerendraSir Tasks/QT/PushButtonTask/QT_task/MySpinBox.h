#ifndef MYSPINBOX_H
#define MYSPINBOX_H

#include <QSpinBox>

class MySpinBox : public QSpinBox
{
public:
    MySpinBox();
    ~MySpinBox();
    bool event(QEvent *event) override;
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // MYSPINBOX_H
