#-------------------------------------------------
#
# Project created by QtCreator 2016-01-29T17:09:12
#
#-------------------------------------------------

QT       += core

QT       -= gui

QT       += testlib

TARGET = TargetContollerLib
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    db/models/types/type.cpp \
    db/models/types/aircraft.cpp \
    db/models/types/fshelicopter.cpp \
    db/models/data.cpp \
    db/models/coord.cpp \
    db/models/group.cpp \
    db/models/target.cpp \
    controller.cpp \
    db/targetdao.cpp \
    db/models/types/navy.cpp

HEADERS += \
    db/models/types/type.h \
    db/models/types/aircraft.h \
    db/models/types/fshelicopter.h \
    db/models/data.h \
    db/models/coord.h \
    db/models/group.h \
    db/models/target.h \
    controller.h \
    db/targetdao.h \
    db/models/types/navy.h
