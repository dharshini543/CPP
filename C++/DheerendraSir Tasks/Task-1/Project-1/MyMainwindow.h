#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QComboBox>
#include <QColor>
#include "drawingarea.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void shapeClicked();
    void penWidthChanged(int index);
    void selectOutlineColor();
    void selectFillColor();

private:
    DrawingArea *drawingArea;

    QMap<QString, QPushButton*> shapeButtons;

    QComboBox *penWidthBox;
    QPushButton *outlineColorBtn;
    QPushButton *fillColorBtn;

    QString currentShape;

    void updateUIFromShape(const QString &shape);
};

#endif // MAINWINDOW_H
