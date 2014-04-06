#-------------------------------------------------
#
# Project created by QtCreator 2014-03-13T09:25:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PJM
TEMPLATE = app


SOURCES += main.cpp\
        acb.cpp \
    menu_main.cpp \
    pr_accueil.cpp \
    aide_context.cpp \
    donnees_generales.cpp

HEADERS  += acb.h \
    menu_main.h \
    pr_accueil.h \
    aide_context.h \
    donnees_generales.h

FORMS    += acb.ui \
    menu_main.ui \
    pr_accueil.ui \
    aide_context.ui \
    donnees_generales.ui
