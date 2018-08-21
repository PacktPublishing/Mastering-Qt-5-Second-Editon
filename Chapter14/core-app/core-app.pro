QT += core network gamepad
QT -= gui

CONFIG += c++11

TARGET = ch14-hat-tips
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    HttpRequest.cpp \
    GamepadReceiver.cpp

HEADERS += \
    HttpRequest.h \
    Person.h \
    GamepadReceiver.h
