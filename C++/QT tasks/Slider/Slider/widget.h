#ifndef WIDGET_H
#define WIDGET_H
#include<QSlider>
#include <QWidget>
#include<qlabel.h>

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    int getMember();

private:

    QSlider* m_slider;
    QLabel* m_label;
    void setupUI();
    void updateSlider();
    void displaySliderValues(int value);
    int m_member;
};

#endif // WIDGET_H
