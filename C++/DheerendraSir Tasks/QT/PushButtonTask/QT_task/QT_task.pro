QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    MyButton.cpp \
    MyCheckBox.cpp \
    MyDoubleSpinBox.cpp \
    MyRadioButton.cpp \
    MyScrollBar.cpp \
    MySlider.cpp \
    MySpinBox.cpp \
    MyToolButton.cpp \
    main.cpp

HEADERS += \
    MyButton.h \
    MyCheckBox.h \
    MyDoubleSpinBox.h \
    MyRadioButton.h \
    MyScrollBar.h \
    MySlider.h \
    MySpinBox.h \
    MyToolButton.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
