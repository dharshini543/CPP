#ifndef MYDOUBLESPINBOX_H
#define MYDOUBLESPINBOX_H

#include <QDoubleSpinBox>

class MyDoubleSpinBox : public QDoubleSpinBox
{
public:
    MyDoubleSpinBox();
    ~MyDoubleSpinBox();
    bool event(QEvent *event) override;
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // MYDOUBLESPINBOX_H
