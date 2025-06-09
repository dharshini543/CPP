QT += core gui widgets quick qml quickwidgets

CONFIG += c++17

SOURCES += \
    main.cpp \
    lineitem.cpp

HEADERS += \
    lineitem.h

# Optional: enable stricter Qt6 API checks
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

# Default rules for deployment (you already had this)
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
