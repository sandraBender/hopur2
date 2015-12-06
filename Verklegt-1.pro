QT += core sql
QT -= gui

TARGET = Verklegt-1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    database.cpp \
    information.cpp \
    service.cpp \
    scientist.cpp \
    computer.cpp

HEADERS += \
    information.h \
    database.h \
    service.h \
    scientist.h \
    computer.h

DISTFILES += \
    database.sqlite \
