#-------------------------------------------------
#
# Project created by QtCreator 2018-05-12T12:47:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DVUI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    dvhsettings.cpp \
    dvhhomewidget.cpp \
    dvhstartup.cpp \
    dhvfile.cpp \
    dvheditmenu.cpp \
    dvhviewmenu.cpp \
    dvhdrawmenu.cpp \
    dvhtextmeasure.cpp \
    dvhsymbols.cpp \
    dvhcrashtools.cpp \
    dvhhelp.cpp \
    dvhlpgeneratereport.cpp \
    dvhlpdimensions.cpp \
    dvhlptext.cpp \
    dvhmergedataaddset.cpp \
    dvhmergedatafirstset.cpp \
    dvhrcblankspace.cpp \
    dvhrcobject.cpp \
    lparcs.cpp \
    lppolygons.cpp \
    lprectangles.cpp \
    lpcircles.cpp \
    lpellipses.cpp \
    lppoints.cpp

HEADERS += \
        mainwindow.h \
    dvhsettings.h \
    dvhhomewidget.h \
    dvhstartup.h \
    dvhfile.h \
    dvheditmenu.h \
    dvhviewmenu.h \
    dvhdrawmenu.h \
    dvhtextmeasure.h \
    dvhsymbols.h \
    dvhcrashtools.h \
    dvhhelp.h \
    dvhlpgeneratereport.h \
    dvhlpdimensions.h \
    dvhlptext.h \
    dvhmergedataaddset.h \
    dvhmergedatafirstset.h \
    dvhrcblankspace.h \
    dvhrcobject.h \
    lparcs.h \
    lppolygons.h \
    lprectangles.h \
    lpcircles.h \
    lpellipses.h \
    lppoints.h

FORMS += \
        mainwindow.ui \
    ../DVI-SettingsMenu/settings.ui \
    dvuihomewidget.ui \
    ../Startup/startupbox.ui \
    ../DVUI-filemenu/filemenu.ui \
    ../DVUI-EditMenu/editmenu.ui \
    ../DVUI-ViewMenu/viewmenu.ui \
    ../DVUI-DrawMenu/drawmenu.ui \
    ../DVUI-TextMeasure/textmeasure.ui \
    ../DVI-SymbolsMenu/symbolsmenu.ui \
    ../DVUI-CrashTools/CrashTools.ui \
    ../DVUI-Help/Help.ui \
    ../DVUI-LeftPanelGenerateReport/LPGenerateReport.ui \
    ../DVUI-LeftToolBarDimensions/LPDimensions.ui \
    ../DVUI-LeftToolBarText/LPText.ui \
    ../DVUI-MergeDataAdditionalFile/MergeDataAddSet.ui \
    ../DVUI-MergeDataSelectFirst/MergeDataFirstSet.ui \
    ../DVUI-RightClickBoxBlankSpace/RCBlankSpace.ui \
    ../DVUI-RightClickBoxOnObject/RCObject.ui \
    lparcs.ui \
    lppolygons.ui \
    lprectangles.ui \
    lpcircles.ui \
    lpellipses.ui \
    lppoints.ui
