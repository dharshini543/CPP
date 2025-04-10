#ifndef MYSCROLLBAR_H
#define MYSCROLLBAR_H

#include <QScrollBar>

class MyScrollBar : public QScrollBar
{
public:
    MyScrollBar();
    ~MyScrollBar();

protected:
    //bool event(QEvent *event) override;
    //void paintEvent(QPaintEvent *event) override;
};

#endif // MYSCROLLBAR_H
