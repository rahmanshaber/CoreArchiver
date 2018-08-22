#-------------------------------------------------
#
# Project created by QtCreator 2018-08-20T09:12:54
#
#-------------------------------------------------

QT       += core gui widgets concurrent

TARGET = corearchiver
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11
CONFIG += silent warn_on

# library for theme
unix:!macx: LIBS += /usr/lib/libcprime.a

DEPENDPATH += . ../lib/
INCLUDEPATH += . ../lib/
LIBS += -L../lib/ -larchiveqt

RESOURCES += \
    icons.qrc

FORMS += \
    corearchiver.ui

HEADERS += \
    corearchiver.h

SOURCES += \
    corearchiver.cpp \
    main.cpp


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



