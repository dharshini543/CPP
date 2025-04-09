#ifndef MYTOOLBUTTON_H
#define MYTOOLBUTTON_H

#include <QToolButton>

class MyToolButton : public QToolButton
{
public:
    MyToolButton();
    ~MyToolButton();
    //bool event(QEvent *event) override;

protected:
    //void paintEvent(QPaintEvent *event) override;
};

#endif // MYTOOLBUTTON_H
