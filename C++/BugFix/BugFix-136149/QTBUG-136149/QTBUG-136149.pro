QT -= gui

CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    main.cpp \
    example.cpp

HEADERS += \
    example.h

# QDoc support
QDOC_FILES = \
    doc/main.qdoc \
    example.h

OTHER_FILES += \
    $$QDOC_FILES \
    doc/qdoc-example.qdocconf \
    doc/images/icon-no-alt.png \
    doc/images/icon-with-alt.png
