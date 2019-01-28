/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "dvhcrashtools.h"
#include "dvhdrawmenu.h"
#include "dvheditmenu.h"
#include "dvhfile.h"
#include "dvhhelp.h"
#include "dvhhomewidget.h"
#include "dvhlpdimensions.h"
#include "dvhlpgeneratereport.h"
#include "dvhlptext.h"
#include "dvhsettings.h"
#include "dvhsymbols.h"
#include "dvhtextmeasure.h"
#include "dvhviewmenu.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *top_ribbon;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *top_button_layout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Logo;
    QToolButton *Save;
    QToolButton *Undo;
    QToolButton *Redo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *job_title;
    QSpacerItem *horizontalSpacer;
    QLabel *Instructions;
    QTabWidget *Ribbon;
    QWidget *File;
    QHBoxLayout *horizontalLayout_3;
    DVHhomewidget *HomeWidget;
    DHVfilemenu *FileMenu;
    QWidget *Edit;
    QHBoxLayout *horizontalLayout_4;
    DVHhomewidget *HomeWidget_2;
    DVHEditMenu *EditMenu;
    QWidget *View;
    QHBoxLayout *horizontalLayout_6;
    DVHhomewidget *HomeWidget_3;
    DVHViewMenu *ViewMenu;
    QWidget *Draw;
    QHBoxLayout *horizontalLayout_7;
    DVHhomewidget *HomeWidget_4;
    DVHDrawMenu *DrawMenu;
    QWidget *TextMeasure;
    QHBoxLayout *horizontalLayout_10;
    DVHhomewidget *HomeWidget_5;
    DVHTextMeasure *TextMeasureMenu;
    QWidget *Symbols;
    QHBoxLayout *horizontalLayout_11;
    DVHhomewidget *HomeWidget_6;
    DVHSymbols *SymbolsMenu;
    QWidget *CrashTools;
    QHBoxLayout *horizontalLayout_12;
    DVHhomewidget *HomeWidget_7;
    DVHCrashTools *CrashToolsMenu;
    QWidget *Settings;
    QHBoxLayout *horizontalLayout_5;
    DVHhomewidget *HomeWidget_8;
    DVHsettings *SettingsMenu;
    QWidget *Help;
    QHBoxLayout *horizontalLayout_13;
    DVHhomewidget *HomeWidget_9;
    DVHHelp *HelpMenu;
    QHBoxLayout *horizontalLayout_8;
    QWidget *LeftToolBar;
    QVBoxLayout *verticalLayout_3;
    DVHLPGenerateReport *GenerateReport;
    DVHLPDimensions *Dimensions;
    DVHLPText *Text;
    QFrame *workspace;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *workspace_2;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QWidget *RightToolBar;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *Date;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Time;
    QTimeEdit *timeEdit;
    QFrame *line;
    QHBoxLayout *horizontalLayout_18;
    QLabel *Address;
    QLineEdit *AddressLineEdit;
    QHBoxLayout *horizontalLayout_19;
    QLabel *City;
    QLineEdit *CityLineEdit;
    QLabel *State;
    QLineEdit *StateLineEdit;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_20;
    QLabel *GPS;
    QLineEdit *GPSLineEdit;
    QFrame *line_3;
    QTabWidget *tabWidget;
    QWidget *Mobile;
    QWidget *Reports;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Xcoordinate;
    QLineEdit *XBox;
    QLabel *Ycoordinate;
    QLineEdit *YBox;
    QToolBar *StatusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(951, 666);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, -1);
        top_ribbon = new QFrame(centralWidget);
        top_ribbon->setObjectName(QStringLiteral("top_ribbon"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(top_ribbon->sizePolicy().hasHeightForWidth());
        top_ribbon->setSizePolicy(sizePolicy);
        top_ribbon->setAutoFillBackground(false);
        top_ribbon->setStyleSheet(QStringLiteral(""));
        top_ribbon->setFrameShape(QFrame::StyledPanel);
        top_ribbon->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(top_ribbon);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, -1);
        top_button_layout = new QHBoxLayout();
        top_button_layout->setSpacing(0);
        top_button_layout->setObjectName(QStringLiteral("top_button_layout"));
        top_button_layout->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        Logo = new QLabel(top_ribbon);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setMaximumSize(QSize(32, 32));
        Logo->setPixmap(QPixmap(QString::fromUtf8("../large icons/Deskto0p Logo.png")));
        Logo->setScaledContents(true);

        horizontalLayout_2->addWidget(Logo);

        Save = new QToolButton(top_ribbon);
        Save->setObjectName(QStringLiteral("Save"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/Save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon);
        Save->setIconSize(QSize(20, 20));
        Save->setAutoRaise(true);

        horizontalLayout_2->addWidget(Save);

        Undo = new QToolButton(top_ribbon);
        Undo->setObjectName(QStringLiteral("Undo"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/Undo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Undo->setIcon(icon1);
        Undo->setIconSize(QSize(20, 20));
        Undo->setAutoRaise(true);

        horizontalLayout_2->addWidget(Undo);

        Redo = new QToolButton(top_ribbon);
        Redo->setObjectName(QStringLiteral("Redo"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/Redo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Redo->setIcon(icon2);
        Redo->setIconSize(QSize(20, 20));
        Redo->setAutoRaise(true);

        horizontalLayout_2->addWidget(Redo);


        top_button_layout->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        top_button_layout->addItem(horizontalSpacer_2);

        job_title = new QLabel(top_ribbon);
        job_title->setObjectName(QStringLiteral("job_title"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        job_title->setPalette(palette);

        top_button_layout->addWidget(job_title);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        top_button_layout->addItem(horizontalSpacer);

        Instructions = new QLabel(top_ribbon);
        Instructions->setObjectName(QStringLiteral("Instructions"));
        QPalette palette1;
        QBrush brush2(QColor(252, 252, 29, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        Instructions->setPalette(palette1);

        top_button_layout->addWidget(Instructions);


        verticalLayout_2->addLayout(top_button_layout);

        Ribbon = new QTabWidget(top_ribbon);
        Ribbon->setObjectName(QStringLiteral("Ribbon"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Ribbon->sizePolicy().hasHeightForWidth());
        Ribbon->setSizePolicy(sizePolicy1);
        Ribbon->setAutoFillBackground(false);
        Ribbon->setUsesScrollButtons(true);
        Ribbon->setDocumentMode(false);
        Ribbon->setTabsClosable(false);
        Ribbon->setMovable(false);
        Ribbon->setTabBarAutoHide(false);
        File = new QWidget();
        File->setObjectName(QStringLiteral("File"));
        horizontalLayout_3 = new QHBoxLayout(File);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        HomeWidget = new DVHhomewidget(File);
        HomeWidget->setObjectName(QStringLiteral("HomeWidget"));

        horizontalLayout_3->addWidget(HomeWidget);

        FileMenu = new DHVfilemenu(File);
        FileMenu->setObjectName(QStringLiteral("FileMenu"));

        horizontalLayout_3->addWidget(FileMenu);

        Ribbon->addTab(File, QString());
        Edit = new QWidget();
        Edit->setObjectName(QStringLiteral("Edit"));
        horizontalLayout_4 = new QHBoxLayout(Edit);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        HomeWidget_2 = new DVHhomewidget(Edit);
        HomeWidget_2->setObjectName(QStringLiteral("HomeWidget_2"));

        horizontalLayout_4->addWidget(HomeWidget_2);

        EditMenu = new DVHEditMenu(Edit);
        EditMenu->setObjectName(QStringLiteral("EditMenu"));

        horizontalLayout_4->addWidget(EditMenu);

        Ribbon->addTab(Edit, QString());
        View = new QWidget();
        View->setObjectName(QStringLiteral("View"));
        horizontalLayout_6 = new QHBoxLayout(View);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        HomeWidget_3 = new DVHhomewidget(View);
        HomeWidget_3->setObjectName(QStringLiteral("HomeWidget_3"));

        horizontalLayout_6->addWidget(HomeWidget_3);

        ViewMenu = new DVHViewMenu(View);
        ViewMenu->setObjectName(QStringLiteral("ViewMenu"));

        horizontalLayout_6->addWidget(ViewMenu);

        Ribbon->addTab(View, QString());
        Draw = new QWidget();
        Draw->setObjectName(QStringLiteral("Draw"));
        horizontalLayout_7 = new QHBoxLayout(Draw);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        HomeWidget_4 = new DVHhomewidget(Draw);
        HomeWidget_4->setObjectName(QStringLiteral("HomeWidget_4"));

        horizontalLayout_7->addWidget(HomeWidget_4);

        DrawMenu = new DVHDrawMenu(Draw);
        DrawMenu->setObjectName(QStringLiteral("DrawMenu"));

        horizontalLayout_7->addWidget(DrawMenu);

        Ribbon->addTab(Draw, QString());
        TextMeasure = new QWidget();
        TextMeasure->setObjectName(QStringLiteral("TextMeasure"));
        horizontalLayout_10 = new QHBoxLayout(TextMeasure);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        HomeWidget_5 = new DVHhomewidget(TextMeasure);
        HomeWidget_5->setObjectName(QStringLiteral("HomeWidget_5"));

        horizontalLayout_10->addWidget(HomeWidget_5);

        TextMeasureMenu = new DVHTextMeasure(TextMeasure);
        TextMeasureMenu->setObjectName(QStringLiteral("TextMeasureMenu"));

        horizontalLayout_10->addWidget(TextMeasureMenu);

        Ribbon->addTab(TextMeasure, QString());
        Symbols = new QWidget();
        Symbols->setObjectName(QStringLiteral("Symbols"));
        horizontalLayout_11 = new QHBoxLayout(Symbols);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        HomeWidget_6 = new DVHhomewidget(Symbols);
        HomeWidget_6->setObjectName(QStringLiteral("HomeWidget_6"));

        horizontalLayout_11->addWidget(HomeWidget_6);

        SymbolsMenu = new DVHSymbols(Symbols);
        SymbolsMenu->setObjectName(QStringLiteral("SymbolsMenu"));

        horizontalLayout_11->addWidget(SymbolsMenu);

        Ribbon->addTab(Symbols, QString());
        CrashTools = new QWidget();
        CrashTools->setObjectName(QStringLiteral("CrashTools"));
        horizontalLayout_12 = new QHBoxLayout(CrashTools);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        HomeWidget_7 = new DVHhomewidget(CrashTools);
        HomeWidget_7->setObjectName(QStringLiteral("HomeWidget_7"));

        horizontalLayout_12->addWidget(HomeWidget_7);

        CrashToolsMenu = new DVHCrashTools(CrashTools);
        CrashToolsMenu->setObjectName(QStringLiteral("CrashToolsMenu"));

        horizontalLayout_12->addWidget(CrashToolsMenu);

        Ribbon->addTab(CrashTools, QString());
        Settings = new QWidget();
        Settings->setObjectName(QStringLiteral("Settings"));
        horizontalLayout_5 = new QHBoxLayout(Settings);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        HomeWidget_8 = new DVHhomewidget(Settings);
        HomeWidget_8->setObjectName(QStringLiteral("HomeWidget_8"));

        horizontalLayout_5->addWidget(HomeWidget_8);

        SettingsMenu = new DVHsettings(Settings);
        SettingsMenu->setObjectName(QStringLiteral("SettingsMenu"));

        horizontalLayout_5->addWidget(SettingsMenu);

        Ribbon->addTab(Settings, QString());
        Help = new QWidget();
        Help->setObjectName(QStringLiteral("Help"));
        horizontalLayout_13 = new QHBoxLayout(Help);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        HomeWidget_9 = new DVHhomewidget(Help);
        HomeWidget_9->setObjectName(QStringLiteral("HomeWidget_9"));

        horizontalLayout_13->addWidget(HomeWidget_9);

        HelpMenu = new DVHHelp(Help);
        HelpMenu->setObjectName(QStringLiteral("HelpMenu"));

        horizontalLayout_13->addWidget(HelpMenu);

        Ribbon->addTab(Help, QString());

        verticalLayout_2->addWidget(Ribbon);


        verticalLayout->addWidget(top_ribbon);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        LeftToolBar = new QWidget(centralWidget);
        LeftToolBar->setObjectName(QStringLiteral("LeftToolBar"));
        verticalLayout_3 = new QVBoxLayout(LeftToolBar);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        GenerateReport = new DVHLPGenerateReport(LeftToolBar);
        GenerateReport->setObjectName(QStringLiteral("GenerateReport"));

        verticalLayout_3->addWidget(GenerateReport);

        Dimensions = new DVHLPDimensions(LeftToolBar);
        Dimensions->setObjectName(QStringLiteral("Dimensions"));

        verticalLayout_3->addWidget(Dimensions);

        Text = new DVHLPText(LeftToolBar);
        Text->setObjectName(QStringLiteral("Text"));

        verticalLayout_3->addWidget(Text);


        horizontalLayout_8->addWidget(LeftToolBar);

        workspace = new QFrame(centralWidget);
        workspace->setObjectName(QStringLiteral("workspace"));
        QPalette palette2;
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush4(QColor(127, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        workspace->setPalette(palette2);
        workspace->setFrameShape(QFrame::StyledPanel);
        workspace->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(workspace);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_5);

        workspace_2 = new QWidget(workspace);
        workspace_2->setObjectName(QStringLiteral("workspace_2"));
        verticalLayout_5 = new QVBoxLayout(workspace_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 417, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        verticalLayout_4->addWidget(workspace_2);


        horizontalLayout_8->addWidget(workspace);

        RightToolBar = new QWidget(centralWidget);
        RightToolBar->setObjectName(QStringLiteral("RightToolBar"));
        verticalLayout_6 = new QVBoxLayout(RightToolBar);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        Date = new QLabel(RightToolBar);
        Date->setObjectName(QStringLiteral("Date"));

        horizontalLayout_17->addWidget(Date);

        dateEdit = new QDateEdit(RightToolBar);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        horizontalLayout_17->addWidget(dateEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_3);

        Time = new QLabel(RightToolBar);
        Time->setObjectName(QStringLiteral("Time"));

        horizontalLayout_17->addWidget(Time);

        timeEdit = new QTimeEdit(RightToolBar);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        horizontalLayout_17->addWidget(timeEdit);


        verticalLayout_6->addLayout(horizontalLayout_17);

        line = new QFrame(RightToolBar);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        Address = new QLabel(RightToolBar);
        Address->setObjectName(QStringLiteral("Address"));

        horizontalLayout_18->addWidget(Address);

        AddressLineEdit = new QLineEdit(RightToolBar);
        AddressLineEdit->setObjectName(QStringLiteral("AddressLineEdit"));

        horizontalLayout_18->addWidget(AddressLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        City = new QLabel(RightToolBar);
        City->setObjectName(QStringLiteral("City"));

        horizontalLayout_19->addWidget(City);

        CityLineEdit = new QLineEdit(RightToolBar);
        CityLineEdit->setObjectName(QStringLiteral("CityLineEdit"));

        horizontalLayout_19->addWidget(CityLineEdit);

        State = new QLabel(RightToolBar);
        State->setObjectName(QStringLiteral("State"));

        horizontalLayout_19->addWidget(State);

        StateLineEdit = new QLineEdit(RightToolBar);
        StateLineEdit->setObjectName(QStringLiteral("StateLineEdit"));

        horizontalLayout_19->addWidget(StateLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_19);

        line_2 = new QFrame(RightToolBar);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_2);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        GPS = new QLabel(RightToolBar);
        GPS->setObjectName(QStringLiteral("GPS"));

        horizontalLayout_20->addWidget(GPS);

        GPSLineEdit = new QLineEdit(RightToolBar);
        GPSLineEdit->setObjectName(QStringLiteral("GPSLineEdit"));

        horizontalLayout_20->addWidget(GPSLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_20);

        line_3 = new QFrame(RightToolBar);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_3);

        tabWidget = new QTabWidget(RightToolBar);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Mobile = new QWidget();
        Mobile->setObjectName(QStringLiteral("Mobile"));
        tabWidget->addTab(Mobile, QString());
        Reports = new QWidget();
        Reports->setObjectName(QStringLiteral("Reports"));
        tabWidget->addTab(Reports, QString());

        verticalLayout_6->addWidget(tabWidget);


        horizontalLayout_8->addWidget(RightToolBar);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        Xcoordinate = new QLabel(centralWidget);
        Xcoordinate->setObjectName(QStringLiteral("Xcoordinate"));

        horizontalLayout_9->addWidget(Xcoordinate);

        XBox = new QLineEdit(centralWidget);
        XBox->setObjectName(QStringLiteral("XBox"));

        horizontalLayout_9->addWidget(XBox);

        Ycoordinate = new QLabel(centralWidget);
        Ycoordinate->setObjectName(QStringLiteral("Ycoordinate"));

        horizontalLayout_9->addWidget(Ycoordinate);

        YBox = new QLineEdit(centralWidget);
        YBox->setObjectName(QStringLiteral("YBox"));

        horizontalLayout_9->addWidget(YBox);

        horizontalLayout_9->setStretch(0, 10);

        verticalLayout->addLayout(horizontalLayout_9);

        MainWindow->setCentralWidget(centralWidget);
        StatusBar = new QToolBar(MainWindow);
        StatusBar->setObjectName(QStringLiteral("StatusBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, StatusBar);

        retranslateUi(MainWindow);

        Ribbon->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Logo->setText(QString());
#ifndef QT_NO_TOOLTIP
        Save->setToolTip(QApplication::translate("MainWindow", "Save", nullptr));
#endif // QT_NO_TOOLTIP
        Save->setText(QString());
#ifndef QT_NO_TOOLTIP
        Undo->setToolTip(QApplication::translate("MainWindow", "Undo", nullptr));
#endif // QT_NO_TOOLTIP
        Undo->setText(QString());
#ifndef QT_NO_TOOLTIP
        Redo->setToolTip(QApplication::translate("MainWindow", "Redo", nullptr));
#endif // QT_NO_TOOLTIP
        Redo->setText(QString());
        job_title->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Instructions->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Ribbon->setTabText(Ribbon->indexOf(File), QApplication::translate("MainWindow", "File", nullptr));
        Ribbon->setTabText(Ribbon->indexOf(Edit), QApplication::translate("MainWindow", "Edit", nullptr));
        Ribbon->setTabText(Ribbon->indexOf(View), QApplication::translate("MainWindow", "View", nullptr));
        Ribbon->setTabText(Ribbon->indexOf(Draw), QApplication::translate("MainWindow", "Draw", nullptr));
        Ribbon->setTabText(Ribbon->indexOf(TextMeasure), QApplication::translate("MainWindow", "Text/Measure", nullptr));
        Ribbon->setTabText(Ribbon->indexOf(Symbols), QApplication::translate("MainWindow", "Symbols", nullptr));
        Ribbon->setTabText(Ribbon->indexOf(CrashTools), QApplication::translate("MainWindow", "Crash Tools", nullptr));
        Ribbon->setTabText(Ribbon->indexOf(Settings), QApplication::translate("MainWindow", "Settings", nullptr));
        Ribbon->setTabText(Ribbon->indexOf(Help), QApplication::translate("MainWindow", "Help", nullptr));
        Date->setText(QApplication::translate("MainWindow", "Date", nullptr));
        Time->setText(QApplication::translate("MainWindow", "Time", nullptr));
        Address->setText(QApplication::translate("MainWindow", "Address", nullptr));
        City->setText(QApplication::translate("MainWindow", "City", nullptr));
        State->setText(QApplication::translate("MainWindow", "State", nullptr));
        GPS->setText(QApplication::translate("MainWindow", "GPS Coordinate of Intersection", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Mobile), QApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Reports), QApplication::translate("MainWindow", "Tab 2", nullptr));
        Xcoordinate->setText(QApplication::translate("MainWindow", "X:", nullptr));
        Ycoordinate->setText(QApplication::translate("MainWindow", "Y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
