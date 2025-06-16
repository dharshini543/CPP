#include "MyMainwindow.h"
#include <QPainter>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    currentShape(Rectangle),
    currentOutlineColor(Qt::black),
    currentFillColor(Qt::white),
    currentPenWidth(2) {

    setFixedSize(1000, 700);

    QStringList shapeNames = {"Rectangle", "Circle", "Square", "Arc", "Pentagon", "Hexagon"};
    for (int i = 0; i < 6; ++i) {
        shapeButtons[i] = new QPushButton(shapeNames[i], this);
        shapeButtons[i]->setGeometry(20, 50 + i * 60, 100, 50);
        shapeButtons[i]->setProperty("shape", i);
        connect(shapeButtons[i], &QPushButton::clicked, this, &MainWindow::selectShape);
    }

    QLabel *penWidthLabel = new QLabel("Pen Width", this);
    penWidthLabel->setGeometry(150, 10, 80, 30);
    penWidthSpin = new QSpinBox(this);
    penWidthSpin->setRange(1, 20);
    penWidthSpin->setValue(currentPenWidth);
    penWidthSpin->setGeometry(230, 10, 60, 30);
    connect(penWidthSpin, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::changePenWidth);

    outlineColorBox = new QComboBox(this);
    outlineColorBox->addItems({"Black", "Red", "Green", "Blue", "Yellow"});
    outlineColorBox->setGeometry(310, 10, 100, 30);
    connect(outlineColorBox, &QComboBox::currentTextChanged, this, &MainWindow::changeOutlineColor);

    fillColorBox = new QComboBox(this);
    fillColorBox->addItems({"White", "Red", "Green", "Blue", "Yellow"});
    fillColorBox->setGeometry(420, 10, 100, 30);
    connect(fillColorBox, &QComboBox::currentTextChanged, this, &MainWindow::changeFillColor);

    drawingArea = new QWidget(this);
    drawingArea->setGeometry(150, 50, 820, 600);
    drawingArea->setStyleSheet("background:white;");
}

MainWindow::~MainWindow() {}

void MainWindow::selectShape() {
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    int type = btn->property("shape").toInt();
    drawShape(static_cast<ShapeType>(type));
}

void MainWindow::drawShape(ShapeType type) {
    QRect area(200 + shapes.size()*30, 100 + shapes.size()*30, 100, 100);
    Shape s = {type, currentOutlineColor, currentFillColor, currentPenWidth, area};
    shapes.append(s);
    update();
}

void MainWindow::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    for (const Shape &s : shapes) {
        QPen pen(s.outlineColor);
        pen.setWidth(s.penWidth);
        painter.setPen(pen);
        painter.setBrush(s.fillColor);

        QRect r = s.rect;
        switch (s.type) {
        case Rectangle: painter.drawRect(r); break;
        case Square: painter.drawRect(QRect(r.topLeft(), QSize(100, 100))); break;
        case Circle: painter.drawEllipse(r); break;
        case Arc: painter.drawArc(r, 30 * 16, 120 * 16); break;
        case Pentagon: {
            QPolygon poly;
            for (int i = 0; i < 5; ++i) {
                poly << QPoint(r.center().x() + 50 * cos(i * 2 * M_PI / 5),
                               r.center().y() + 50 * sin(i * 2 * M_PI / 5));
            }
            painter.drawPolygon(poly);
            break;
        }
        case Hexagon: {
            QPolygon poly;
            for (int i = 0; i < 6; ++i) {
                poly << QPoint(r.center().x() + 50 * cos(i * 2 * M_PI / 6),
                               r.center().y() + 50 * sin(i * 2 * M_PI / 6));
            }
            painter.drawPolygon(poly);
            break;
        }
        }
    }
}

void MainWindow::changePenWidth(int w) {
    currentPenWidth = w;
}

void MainWindow::changeOutlineColor() {
    currentOutlineColor = colorFromName(outlineColorBox->currentText());
}

void MainWindow::changeFillColor() {
    currentFillColor = colorFromName(fillColorBox->currentText());
}

QColor MainWindow::colorFromName(const QString &name) {
    static QMap<QString, QColor> colorMap = {
        {"Black", Qt::black}, {"Red", Qt::red}, {"Green", Qt::green},
        {"Blue", Qt::blue}, {"Yellow", Qt::yellow}, {"White", Qt::white}
    };
    return colorMap.value(name, Qt::black);
}
