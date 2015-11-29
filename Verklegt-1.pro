QT += core
QT -= gui

TARGET = Verklegt-1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    sort.cpp \
    database.cpp \
    information.cpp \
    service.cpp \
    scientist.cpp
    information.cpp
    search.cpp

HEADERS += \
    information.h \
    sort.h \
    database.h \
    search.h \
    service.h \
    scientist.h
