#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget{parent}
{
    qDebug()  << "Widget Constructor";
    setFixedSize(700, 500);
    setupUI();
}

int Widget::getMember()
{
    int x = 5;
    m_member = x;
    return m_member;
}

void Widget::setupUI()
{
    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(100, 10, 500, 300);
    m_slider->setRange(0, 200);
    // m_slider->setTracking(true);
    // m_slider->tracking = false;
    // m_slider->tickInterval = 5;
    connect(m_slider, &QSlider::valueChanged, this, &Widget::displaySliderValues);

    m_label = new QLabel("0", this);
    m_label->setGeometry(200, 250, 100, 30);

}

void Widget::displaySliderValues(int value)
{
    m_label->setText(QString::number(value));
    qDebug()  << "Value"<<value;
    qDebug()  << "Tracking::"<<m_slider->hasTracking();

}
