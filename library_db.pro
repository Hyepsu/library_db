QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = library_db
TEMPLATE = app

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    mainwindow_adm.cpp \
    add_new.cpp

HEADERS  += mainwindow.h \
    login.h \
    connect.h \
    mainwindow_adm.h \
    add_new.h

FORMS    += mainwindow.ui \
    login.ui \
    mainwindow_adm.ui \
    add_new.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
