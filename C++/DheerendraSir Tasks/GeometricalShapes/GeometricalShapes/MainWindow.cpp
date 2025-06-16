#include "MainWindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QSpacerItem>
#include <QColor>
#include <QFont>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout;

    QHBoxLayout *controlsLayout = new QHBoxLayout;
    controlsLayout->addSpacing(40);

    QFont labelFont;
    labelFont.setPointSize(14);
    labelFont.setBold(true);

    QLabel *penLabel = new QLabel("Pen Width:");
    penLabel->setFont(labelFont);

    penWidthSpinBox = new QSpinBox;
    penWidthSpinBox->setRange(1, 20);
    penWidthSpinBox->setValue(3);
    penWidthSpinBox->setFixedWidth(80);
    penWidthSpinBox->setFont(labelFont);

    QLabel *borderLabel = new QLabel("Border Color:");
    borderLabel->setFont(labelFont);
    borderColorLineEdit = new QLineEdit;
    borderColorLineEdit->setFixedWidth(150);
    borderColorLineEdit->setPlaceholderText("e.g. red or #ff0000");
    borderColorLineEdit->setFont(labelFont);

    QLabel *fillLabel = new QLabel("Fill Color:");
    fillLabel->setFont(labelFont);
    fillColorLineEdit = new QLineEdit;
    fillColorLineEdit->setFixedWidth(150);
    fillColorLineEdit->setPlaceholderText("e.g. blue or #0000ff");
    fillColorLineEdit->setFont(labelFont);

    controlsLayout->addWidget(penLabel);
    controlsLayout->addWidget(penWidthSpinBox);
    controlsLayout->addSpacing(30);
    controlsLayout->addWidget(borderLabel);
    controlsLayout->addWidget(borderColorLineEdit);
    controlsLayout->addSpacing(30);
    controlsLayout->addWidget(fillLabel);
    controlsLayout->addWidget(fillColorLineEdit);
    controlsLayout->addStretch();

    mainLayout->addLayout(controlsLayout);
    mainLayout->addSpacing(10);

    QHBoxLayout *middleLayout = new QHBoxLayout;
    QVBoxLayout *buttonsLayout = new QVBoxLayout;

    QFont buttonFont;
    buttonFont.setPointSize(26);
    buttonFont.setBold(true);

    rectangleButton = new QPushButton("▭");
    circleButton = new QPushButton("◯");
    squareButton = new QPushButton("▢");
    rhombusButton = new QPushButton("◇");
    triangleButton = new QPushButton("△");

    QList<QPushButton*> buttons = {
        rectangleButton,
        circleButton,
        squareButton,
        rhombusButton,
        triangleButton
    };

    for (auto *btn : buttons) {
        btn->setFont(buttonFont);
        btn->setFixedSize(100, 80);
        buttonsLayout->addWidget(btn);
    }

    buttonsLayout->addStretch();
    buttonsLayout->setAlignment(Qt::AlignTop | Qt::AlignLeft);

    shapeWidget = new ShapeWidget(this);
    shapeWidget->setMinimumSize(700, 500);

    middleLayout->addLayout(buttonsLayout);
    middleLayout->addSpacing(20);
    middleLayout->addWidget(shapeWidget, 1);

    mainLayout->addLayout(middleLayout);

    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
    setWindowTitle("Shape Drawer");

    connect(rectangleButton, &QPushButton::clicked, this, &MainWindow::setShapeRectangle);
    connect(circleButton, &QPushButton::clicked, this, &MainWindow::setShapeCircle);
    connect(squareButton, &QPushButton::clicked, this, &MainWindow::setShapeSquare);
    connect(rhombusButton, &QPushButton::clicked, this, &MainWindow::setShapeRhombus);
    connect(triangleButton, &QPushButton::clicked, this, &MainWindow::setShapeTriangle);

    connect(penWidthSpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::updatePenWidth);
    connect(borderColorLineEdit, &QLineEdit::editingFinished, this, &MainWindow::applyBorderColor);
    connect(fillColorLineEdit, &QLineEdit::editingFinished, this, &MainWindow::applyFillColor);

    setShapeRectangle();
}

MainWindow::~MainWindow()
{
    std::cout << "MainWindow Destructor called" << std::endl;
}

void MainWindow::setShapeRectangle()
{
    shapeWidget->setShapeType("Rectangle");
}

void MainWindow::setShapeCircle()
{
    shapeWidget->setShapeType("Circle");
}

void MainWindow::setShapeSquare()
{
    shapeWidget->setShapeType("Square");
}

void MainWindow::setShapeRhombus()
{
    shapeWidget->setShapeType("Rhombus");
}

void MainWindow::setShapeTriangle()
{
    shapeWidget->setShapeType("Triangle");
}

void MainWindow::updatePenWidth(int width)
{
    shapeWidget->setPenWidth(width);
}

void MainWindow::applyBorderColor()
{
    QColor color(borderColorLineEdit->text());
    if (color.isValid()) {
        shapeWidget->setBorderColor(color);
    }
}

void MainWindow::applyFillColor()
{
    QColor color(fillColorLineEdit->text());
    if (color.isValid()) {
        shapeWidget->setFillColor(color);
    }
}
