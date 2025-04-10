#ifndef MYCHECKBOX_H
#define MYCHECKBOX_H

#include <QCheckBox>

class MyCheckBox : public QCheckBox
{
public:
    MyCheckBox();
    ~MyCheckBox();

protected:
    //bool event(QEvent *event) override;
    //void paintEvent(QPaintEvent *event) override;
};

#endif // MYCHECKBOX_H
