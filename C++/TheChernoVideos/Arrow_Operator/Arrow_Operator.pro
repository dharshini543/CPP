TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        entity.cpp \
        main.cpp \
        scopedptr.cpp

HEADERS += \
    entity.h \
    scopedptr.h
