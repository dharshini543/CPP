#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

class MyButton : public QPushButton
{
public:
    MyButton();
    ~MyButton();
    //bool event(QEvent *event) override;

protected:
    //void paintEvent(QPaintEvent *event) override;
};

#endif // MYBUTTON_H
