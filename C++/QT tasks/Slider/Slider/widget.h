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

private:

    QSlider* m_slider;
    QLabel* m_label;
    void setupUI();
    void updateSlider();
    void displaySliderValues(int value);
};

#endif // WIDGET_H
