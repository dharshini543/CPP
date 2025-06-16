#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QColor>
#include <QComboBox>
#include <QSpinBox>
#include <QPainterPath>
#include <QList>

enum ShapeType { Rectangle, Circle, Square, Arc, Pentagon, Hexagon };

struct Shape {
    ShapeType type;
    QColor outlineColor;
    QColor fillColor;
    int penWidth;
    QRect rect;
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *event) override;

private slots:
    void selectShape();
    void changePenWidth(int);
    void changeOutlineColor();
    void changeFillColor();

private:
    QWidget *drawingArea;
    QPushButton *shapeButtons[6];
    QComboBox *outlineColorBox;
    QComboBox *fillColorBox;
    QSpinBox *penWidthSpin;

    ShapeType currentShape;
    QColor currentOutlineColor;
    QColor currentFillColor;
    int currentPenWidth;

    QList<Shape> shapes;

    void drawShape(ShapeType type);
    QColor colorFromName(const QString &name);
};
#endif // MAINWINDOW_H
