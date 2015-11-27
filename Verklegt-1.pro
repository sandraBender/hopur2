QT += core
QT -= gui

TARGET = Verklegt-1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    scientists.cpp \
    sort.cpp \
    database.cpp \
    information.cpp

HEADERS += \
    scientists.h \
    information.h \
    sort.h \
    database.h
