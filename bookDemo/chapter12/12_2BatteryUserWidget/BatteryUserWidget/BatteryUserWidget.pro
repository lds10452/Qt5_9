QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BatteryUserWidget
TEMPLATE = app

FORMS += \
    $$PWD/BatteryUserWidget.ui

HEADERS += \
    $$PWD/BatteryUserWidget.h

SOURCES += \
    $$PWD/BatteryUserWidget.cpp \
    main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/include/ -lqcustombatteryplugin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/include/ -lqcustombatteryplugind

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include
