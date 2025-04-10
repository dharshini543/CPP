#ifndef MYRADIOBUTTON_H
#define MYRADIOBUTTON_H

#include <QRadioButton>

class MyRadioButton : public QRadioButton
{
public:
    MyRadioButton();
    ~MyRadioButton();

protected:
    //bool event(QEvent *event) override;
    //void paintEvent(QPaintEvent *event) override;
};

#endif // MYRADIOBUTTON_H
