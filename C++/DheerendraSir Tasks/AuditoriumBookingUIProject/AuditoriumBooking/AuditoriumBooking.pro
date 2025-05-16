TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        auditorium.cpp \
        auditoriumbookingmanager.cpp \
        calendar.cpp \
        calendarui.cpp \
        date.cpp \
        day.cpp \
        debug.cpp \
        main.cpp \
        month.cpp \
        year.cpp

HEADERS += \
    auditorium.h \
    auditoriumbookingmanager.h \
    calendar.h \
    calendarui.h \
    date.h \
    day.h \
    debug.h \
    month.h \
    year.h

QT += widgets
