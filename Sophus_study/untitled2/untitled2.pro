TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    useSophus.cpp
INCLUDEPATH += /usr/local/include/sophus \
               /usr/include/eigen3\
LIBS += /usr/local/lib/libSophus.so

