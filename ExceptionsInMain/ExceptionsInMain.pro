TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    TestExceptionInMains.cpp \
    CException.cpp

HEADERS += \
    CException.h \
    CstCodErr.h
