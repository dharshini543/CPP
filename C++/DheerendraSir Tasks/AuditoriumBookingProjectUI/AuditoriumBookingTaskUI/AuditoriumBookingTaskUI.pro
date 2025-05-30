# TEMPLATE = app
# CONFIG += console c++17
# CONFIG -= app_bundle
# CONFIG -= qt

# SOURCES += \
#         main.cpp


TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        CalendarUI.cpp \
        auditorium.cpp \
        auditoriumbookingmanager.cpp \
        calendar.cpp \
        date.cpp \
        day.cpp \
        debug.cpp \
        main.cpp \
        month.cpp \
        year.cpp

HEADERS += \
    CalendarUI.h \
    auditorium.h \
    auditoriumbookingmanager.h \
    calendar.h \
    date.h \
    day.h \
    debug.h \
    month.h \
    year.h

QT += widgets
