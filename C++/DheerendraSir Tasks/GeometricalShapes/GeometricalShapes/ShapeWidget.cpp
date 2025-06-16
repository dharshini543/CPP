#include "ShapeWidget.h"
#include <QPainter>
#include <QPolygon>
#include <QtMath>

ShapeWidget::ShapeWidget(QWidget *parent)
    : QWidget(parent), currentShape("Rectangle")
{
    QStringList shapes = { "Rectangle", "Circle", "Square", "Rhombus", "Triangle" };
    for (const QString &shape : shapes) {
        shapeStyles[shape] = { 2, Qt::black, Qt::blue };
    }
}

void ShapeWidget::setShapeType(const QString &shape)
{
    currentShape = shape;
    update();
}

void ShapeWidget::setPenWidth(int width)
{
    shapeStyles[currentShape].penWidth = width;
    update();
}

void ShapeWidget::setBorderColor(const QColor &color)
{
    shapeStyles[currentShape].borderColor = color;
    update();
}

void ShapeWidget::setFillColor(const QColor &color)
{
    shapeStyles[currentShape].fillColor = color;
    update();
}

void ShapeWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    ShapeData style = shapeStyles[currentShape];
    painter.setPen(QPen(style.borderColor, style.penWidth));
    painter.setBrush(style.fillColor);

    QRect rect(width() / 4, height() / 4, width() / 2, height() / 2);

    if (currentShape == "Rectangle")
    {
        painter.drawRect(rect);
    }
    else if (currentShape == "Circle")
    {
        painter.drawEllipse(rect);
    }
    else if (currentShape == "Square")
    {
        int size = qMin(rect.width(), rect.height());
        QRect square(rect.topLeft(), QSize(size, size));
        painter.drawRect(square);
    }
    else if (currentShape == "Rhombus")
    {
        QPolygon rhombus;
        QPoint center = rect.center();
        int dx = rect.width() / 2;
        int dy = rect.height() / 2;
        rhombus << QPoint(center.x(), center.y() - dy)
                << QPoint(center.x() + dx, center.y())
                << QPoint(center.x(), center.y() + dy)
                << QPoint(center.x() - dx, center.y());
        painter.drawPolygon(rhombus);
    }
    else if (currentShape == "Triangle")
    {
        QPolygon triangle;
        triangle << QPoint(rect.left() + rect.width() / 2, rect.top())
                 << QPoint(rect.left(), rect.bottom())
                 << QPoint(rect.right(), rect.bottom());
        painter.drawPolygon(triangle);
    }
}
