#ifndef QPAINTEVENT_H
#define QPAINTEVENT_H

#include <QWidget>

class QPaintEvent:public QWidget
{
public:
    QPaintEvent();
   ~ QPaintEvent();

    void paintEvent(QPaintEvent *event);
   //virtual QPaintEngine *paintEngine() const override;
};

#endif // QPAINTEVENT_H
