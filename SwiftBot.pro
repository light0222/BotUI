QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SwiftBot
TEMPLATE = app

DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD/include

SOURCES += \
        source/main.cpp \
        source/mainwindow.cpp \
    source/quickactionmenu.cpp \
    source/characterdata.cpp \
    source/characterdelegate.cpp \
    source/characterview.cpp \
    source/details/console.cpp \
    source/details/character.cpp \
    source/details/inventory.cpp \
    source/details/map.cpp \
    source/details/fight.cpp \
    source/details/settings.cpp \
    source/details/flood.cpp \
    source/details/script.cpp \
    source/details/stats.cpp \
    source/connectionform.cpp \
    source/accountmanager.cpp

HEADERS += \
        include/mainwindow.hh \
    include/quickactionmenu.hh \
    include/characterdata.hh \
    include/characterdelegate.hh \
    include/characterview.hh \
    include/details/console.hh \
    include/details/character.hh \
    include/details/inventory.hh \
    include/details/map.hh \
    include/details/fight.hh \
    include/details/settings.hh \
    include/details/flood.hh \
    include/details/script.hh \
    include/details/stats.hh \
    include/connectionform.hh \
    include/accountmanager.hh

FORMS += \
        form/mainwindow.ui \
    form/quickactionmenu.ui \
    form/characterview.ui \
    form/details/console.ui \
    form/details/character.ui \
    form/details/inventory.ui \
    form/details/map.ui \
    form/details/fight.ui \
    form/details/settings.ui \
    form/details/flood.ui \
    form/details/script.ui \
    form/details/stats.ui \
    form/connectionform.ui \
    form/accountmanager.ui

RESOURCES += \
        translations/translations.qrc\
        resources/icons.qrc\
        resources/stats.qrc\
        resources/style.qrc

LANGUAGES = fr\
            en

defineReplace(prependAll) {
 for(a,$$1):result += $$2$${a}$$3
 return($$result)
}

TRANSLATIONS = $$prependAll(LANGUAGES, $$PWD/translations/swiftbot_, .ts)
