#ifndef MYSCROLLBAR_H
#define MYSCROLLBAR_H

#include <QScrollBar>

class MyScrollBar : public QScrollBar
{
public:
    MyScrollBar();
    ~MyScrollBar();
    bool event(QEvent *event) override;
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // MYSCROLLBAR_H
