TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    eigenMatrix.cpp
#QMAKE_CXXFLAGS += -std=c++11
INCLUDEPATH += /usr/local/include \
               /usr/include/eigen3\
