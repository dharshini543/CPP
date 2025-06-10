#include "MyMainwindow.h"
#include"ShapeStyle.h"
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    resize(1000, 700);
    setWindowTitle("Shape Drawer");

    int buttonSize = 60;
    int spacing = 15;
    int x = 20, y = 80;

    // Shape buttons
    circleBtn = new QPushButton("●", this);
    circleBtn->setGeometry(x, y + 0 * (buttonSize + spacing), buttonSize, buttonSize);
    connect(circleBtn, &QPushButton::clicked, this, &MainWindow::drawCircle);

    squareBtn = new QPushButton("■", this);
    squareBtn->setGeometry(x, y + 1 * (buttonSize + spacing), buttonSize, buttonSize);
    connect(squareBtn, &QPushButton::clicked, this, &MainWindow::drawSquare);

    rectBtn = new QPushButton("▭", this);
    rectBtn->setGeometry(x, y + 2 * (buttonSize + spacing), buttonSize, buttonSize);
    connect(rectBtn, &QPushButton::clicked, this, &MainWindow::drawRectangle);

    diamondBtn = new QPushButton("◆", this);
    diamondBtn->setGeometry(x, y + 3 * (buttonSize + spacing), buttonSize, buttonSize);
    connect(diamondBtn, &QPushButton::clicked, this, &MainWindow::drawDiamond);

    arcBtn = new QPushButton("⌒", this);
    arcBtn->setGeometry(x, y + 4 * (buttonSize + spacing), buttonSize, buttonSize);
    connect(arcBtn, &QPushButton::clicked, this, &MainWindow::drawArc);

    // Top controls
    penWidthBox = new QComboBox(this);
    penWidthBox->setGeometry(100, 20, 120, 40);
    for (int i = 1; i <= 10; ++i) penWidthBox->addItem(QString::number(i));
    connect(penWidthBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::penWidthChanged);

    outlineColorBtn = new QPushButton("Border Colour", this);
    outlineColorBtn->setGeometry(240, 20, 150, 40);
    connect(outlineColorBtn, &QPushButton::clicked, this, &MainWindow::selectOutlineColor);

    fillColorBtn = new QPushButton("Fill", this);
    fillColorBtn->setGeometry(410, 20, 100, 40);
    connect(fillColorBtn, &QPushButton::clicked, this, &MainWindow::selectFillColor);

    // Drawing area
    drawingArea = new DrawingArea(this);
    drawingArea->setGeometry(100, 80, 870, 590);
    drawingArea->setStyleSheet("background-color: white;");
}

void MainWindow::applyCurrentStyle() {
    if (!currentShapeName.isEmpty()) {
        ShapeStyle style = shapeStyles[currentShapeName];
        drawingArea->drawShape(currentShapeName, style.penWidth, style.outlineColor, style.fillColor);
    }
}

void MainWindow::updateControlsFromStyle() {
    if (shapeStyles.contains(currentShapeName)) {
        const ShapeStyle &style = shapeStyles[currentShapeName];
        penWidthBox->setCurrentIndex(style.penWidth - 1);
    }
}

void MainWindow::penWidthChanged(int index) {
    if (!currentShapeName.isEmpty()) {
        shapeStyles[currentShapeName].penWidth = index + 1;
        applyCurrentStyle();
    }
}

void MainWindow::selectOutlineColor() {
    QColor color = QColorDialog::getColor(Qt::black, this);
    if (color.isValid() && !currentShapeName.isEmpty()) {
        shapeStyles[currentShapeName].outlineColor = color;
        applyCurrentStyle();
    }
}

void MainWindow::selectFillColor() {
    QColor color = QColorDialog::getColor(Qt::white, this);
    if (color.isValid() && !currentShapeName.isEmpty()) {
        shapeStyles[currentShapeName].fillColor = color;
        applyCurrentStyle();
    }
}

void MainWindow::drawCircle() {
    currentShapeName = "circle";
    if (!shapeStyles.contains(currentShapeName))
        shapeStyles[currentShapeName] = {1, Qt::black, Qt::white};
    updateControlsFromStyle();
    applyCurrentStyle();
}

void MainWindow::drawSquare() {
    currentShapeName = "square";
    if (!shapeStyles.contains(currentShapeName))
        shapeStyles[currentShapeName] = {1, Qt::black, Qt::white};
    updateControlsFromStyle();
    applyCurrentStyle();
}

void MainWindow::drawRectangle() {
    currentShapeName = "rectangle";
    if (!shapeStyles.contains(currentShapeName))
        shapeStyles[currentShapeName] = {1, Qt::black, Qt::white};
    updateControlsFromStyle();
    applyCurrentStyle();
}

void MainWindow::drawDiamond() {
    currentShapeName = "diamond";
    if (!shapeStyles.contains(currentShapeName))
        shapeStyles[currentShapeName] = {1, Qt::black, Qt::white};
    updateControlsFromStyle();
    applyCurrentStyle();
}

void MainWindow::drawArc() {
    currentShapeName = "arc";
    if (!shapeStyles.contains(currentShapeName))
        shapeStyles[currentShapeName] = {1, Qt::black, Qt::white};
    updateControlsFromStyle();
    applyCurrentStyle();
}
