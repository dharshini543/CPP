#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QWidget>

class QPushButton;
class QVBoxLayout;

class MyWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MyWindow(QWidget *parent = nullptr);
    ~MyWindow();

private:
    QVBoxLayout *layout;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
};

#endif // MYWINDOW_H
