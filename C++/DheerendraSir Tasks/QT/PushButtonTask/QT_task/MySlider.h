#ifndef MYSLIDER_H
#define MYSLIDER_H

#include <QSlider>

class MySlider : public QSlider
{
public:
    MySlider();
    ~MySlider();
    bool event(QEvent *event) override;
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // MYSLIDER_H
