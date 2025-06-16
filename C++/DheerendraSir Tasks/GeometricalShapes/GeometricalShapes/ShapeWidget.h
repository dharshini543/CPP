#ifndef SHAPEWIDGET_H
#define SHAPEWIDGET_H

#include <QWidget>
#include <QColor>
#include <QMap>

struct ShapeData
{
    int penWidth;
    QColor borderColor;
    QColor fillColor;
};

class ShapeWidget : public QWidget
{
    Q_OBJECT
public:
    ShapeWidget(QWidget *parent = nullptr);

    void setShapeType(const QString &shape);
    void setPenWidth(int width);
    void setBorderColor(const QColor &color);
    void setFillColor(const QColor &color);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QString currentShape;
    QMap<QString, ShapeData> shapeStyles;
};

#endif
