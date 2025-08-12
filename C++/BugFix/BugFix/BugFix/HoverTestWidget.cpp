#include "HoverTestWidget.h"
#include <QDebug>
#include <QPainter>
#include <QMouseEvent>
#include <QKeyEvent>

HoverTestWidget::HoverTestWidget(QWidget *parent)
    : QWidget(parent)
{
    setAttribute(Qt::WA_Hover);
}

void HoverTestWidget::enterEvent(QEvent *event)
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
