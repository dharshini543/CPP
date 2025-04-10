#ifndef MYSPINBOX_H
#define MYSPINBOX_H

#include <QSpinBox>

class MySpinBox : public QSpinBox
{
public:
    MySpinBox();
    ~MySpinBox();

protected:
    //bool event(QEvent *event) override;
    //void paintEvent(QPaintEvent *event) override;
};

#endif // MYSPINBOX_H
