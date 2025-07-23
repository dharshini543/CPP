QT       -= gui

CONFIG   += console c++17
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += \
    add.cpp \
    main.cpp \
    test_add.cpp \

HEADERS += \
    add.h

INCLUDEPATH += /usr/include/gtest

LIBS += -lgtest -lgtest_main -pthread
