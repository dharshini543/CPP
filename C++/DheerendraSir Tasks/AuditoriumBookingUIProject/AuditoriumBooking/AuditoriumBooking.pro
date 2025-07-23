TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        auditorium.cpp \
        auditorium_test.cpp \
        auditoriumbookingmanager.cpp \
        auditoriumbookingmanager_test.cpp \
        calendar.cpp \
        calendar_test.cpp \
        calendarui.cpp \
        calendarui_test.cpp \
        date.cpp \
        date_test.cpp \
        day.cpp \
        day_test.cpp \
        debug.cpp \
        main.cpp \
        month.cpp \
        month_test.cpp \
        year.cpp \
        year_test.cpp

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
