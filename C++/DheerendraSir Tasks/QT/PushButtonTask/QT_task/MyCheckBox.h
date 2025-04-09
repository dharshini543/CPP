#ifndef MYCHECKBOX_H
#define MYCHECKBOX_H

#include <QCheckBox>

class MyCheckBox : public QCheckBox
{
public:
    MyCheckBox();
    ~MyCheckBox();
    //bool event(QEvent *event) override;

protected:
    //void paintEvent(QPaintEvent *event) override;
};

#endif // MYCHECKBOX_H
