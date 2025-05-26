TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Entity.cpp \
        Player.cpp \
        Printable.cpp \
        main.cpp

HEADERS += \
    Entity.h \
    Player.h \
    Printable.h
