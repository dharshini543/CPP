#ifndef MYRADIOBUTTON_H
#define MYRADIOBUTTON_H

#include <QRadioButton>

class MyRadioButton : public QRadioButton
{
public:
    MyRadioButton();
    ~MyRadioButton();
    //bool event(QEvent *event) override;

protected:
    //void paintEvent(QPaintEvent *event) override;
};

#endif // MYRADIOBUTTON_H
