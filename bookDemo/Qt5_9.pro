QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp

include(chapter01/chapter01.pri)
include(chapter02/chapter02.pri)
include(chapter03/chapter03.pri)
include(chapter04/chapter04.pri)
include(chapter05/chapter05.pri)
include(chapter06/chapter06.pri)
include(chapter07/chapter07.pri)
include(chapter08/chapter08.pri)

include(chapter12/chapter12.pri)

include(chapter16/chapter16.pri)

RESOURCES += \
    res.qrc

RC_ICONS = res/images/AppIcon.ico

INCLUDEPATH+=$$PWD/chapter08/8_4GraphicsCoordinateMainWindow #自定义控件时，需要指定自定义控件类的头文件目录
INCLUDEPATH+=$$PWD/chapter12/12_1PromotionWidget
INCLUDEPATH+=$$PWD/chapter06/6_2CustomDialogsMainWindow

TRANSLATIONS  =cn.ts\
              en.ts
