#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

class MyButton : public QPushButton
{
public:
    MyButton();
    ~MyButton();

protected:
    bool event(QEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
};

#endif // MYBUTTON_H
