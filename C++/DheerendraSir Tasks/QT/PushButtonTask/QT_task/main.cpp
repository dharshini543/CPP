#include "MyButton.h"
#include "MyRadioButton.h"
#include"MyCheckBox.h"
#include"MyToolButton.h"
#include "MySlider.h"
#include "MyScrollBar.h"
#include "MyDoubleSpinBox.h"
#include "MySpinBox.h"
#include<QPaintEvent>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyButton button;
    button.show();
    MyRadioButton radioButton;
    radioButton.show();
    MyCheckBox checkBox;
    checkBox.show();
    MyToolButton toolButton;
    toolButton.show();
    MySlider slider;
    slider.show();
    MyScrollBar scrollBar;
    scrollBar.show();
    MyDoubleSpinBox doubleSpinBox;
    doubleSpinBox.show();
    MySpinBox spinBox;
    spinBox.show();

    /*MyButton button;
    QPushButton* ptr = static_cast<QPushButton*>(&button);
    ptr->show();*/

    return a.exec();
}
