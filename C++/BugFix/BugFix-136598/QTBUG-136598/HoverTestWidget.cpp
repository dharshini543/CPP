#include "HoverTestWidget.h"
#include <QDebug>
#include <QPainter>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QEnterEvent>

HoverTestWidget::HoverTestWidget(QWidget *parent)
    : QWidget(parent)
{
    setAttribute(Qt::WA_Hover);
    setFocusPolicy(Qt::StrongFocus);
    setCursor(Qt::PointingHandCursor);
}

void HoverTestWidget::enterEvent(QEnterEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "HOVER ENTERED";
    update();
}

void HoverTestWidget::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "MOUSE CLICKED";
}

void HoverTestWidget::keyPressEvent(QKeyEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "KEY PRESSED";
}

void HoverTestWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.fillRect(rect(), QColor(200, 200, 255));
    painter.setPen(Qt::black);
    painter.drawRect(rect());
}
