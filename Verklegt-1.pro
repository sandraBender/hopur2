QT += core
QT -= gui

TARGET = Verklegt-1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    scientists.cpp \
    database.cpp

HEADERS += \
    scientists.h \
    database.h

