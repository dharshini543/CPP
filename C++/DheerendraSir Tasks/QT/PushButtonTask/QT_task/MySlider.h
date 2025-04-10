#ifndef MYSLIDER_H
#define MYSLIDER_H

#include <QSlider>

class MySlider : public QSlider
{
public:
    MySlider();
    ~MySlider();

protected:
    //bool event(QEvent *event) override;
    //void paintEvent(QPaintEvent *event) override;
};

#endif // MYSLIDER_H
