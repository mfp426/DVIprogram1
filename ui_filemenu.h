/********************************************************************************
** Form generated from reading UI file 'filemenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEMENU_H
#define UI_FILEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVUIfilemenu
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *New;
    QToolButton *Open;
    QToolButton *OpenfromCloud;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *Close;
    QToolButton *Save;
    QToolButton *SaveAs;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *ImportData;
    QToolButton *MergeData;
    QToolButton *ExportData;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *PrintPreview;
    QToolButton *Print;
    QFrame *line_4;
    QToolButton *toolButton_3;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DVUIfilemenu)
    {
        if (DVUIfilemenu->objectName().isEmpty())
            DVUIfilemenu->setObjectName(QStringLiteral("DVUIfilemenu"));
        DVUIfilemenu->resize(1127, 93);
        DVUIfilemenu->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(DVUIfilemenu);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        New = new QToolButton(DVUIfilemenu);
        New->setObjectName(QStringLiteral("New"));
        QPalette palette;
        New->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/new-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        New->setIcon(icon);
        New->setIconSize(QSize(32, 32));
        New->setToolButtonStyle(Qt::ToolButtonIconOnly);
        New->setAutoRaise(true);

        horizontalLayout_2->addWidget(New);

        Open = new QToolButton(DVUIfilemenu);
        Open->setObjectName(QStringLiteral("Open"));
        QPalette palette1;
        Open->setPalette(palette1);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/open folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        Open->setIcon(icon1);
        Open->setIconSize(QSize(32, 32));
        Open->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Open->setAutoRaise(true);

        horizontalLayout_2->addWidget(Open);

        OpenfromCloud = new QToolButton(DVUIfilemenu);
        OpenfromCloud->setObjectName(QStringLiteral("OpenfromCloud"));
        QPalette palette2;
        OpenfromCloud->setPalette(palette2);
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/download-from-cloud-to-laptop.png"), QSize(), QIcon::Normal, QIcon::Off);
        OpenfromCloud->setIcon(icon2);
        OpenfromCloud->setIconSize(QSize(32, 32));
        OpenfromCloud->setToolButtonStyle(Qt::ToolButtonIconOnly);
        OpenfromCloud->setAutoRaise(true);

        horizontalLayout_2->addWidget(OpenfromCloud);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        line = new QFrame(DVUIfilemenu);
        line->setObjectName(QStringLiteral("line"));
        QPalette palette3;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        line->setPalette(palette3);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Close = new QToolButton(DVUIfilemenu);
        Close->setObjectName(QStringLiteral("Close"));
        QPalette palette4;
        Close->setPalette(palette4);
        Close->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral("../large icons/Close.png"), QSize(), QIcon::Normal, QIcon::Off);
        Close->setIcon(icon3);
        Close->setIconSize(QSize(32, 32));
        Close->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Close->setAutoRaise(true);

        horizontalLayout_4->addWidget(Close);

        Save = new QToolButton(DVUIfilemenu);
        Save->setObjectName(QStringLiteral("Save"));
        QPalette palette5;
        Save->setPalette(palette5);
        QIcon icon4;
        icon4.addFile(QStringLiteral("../large icons/Save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon4);
        Save->setIconSize(QSize(32, 32));
        Save->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Save->setAutoRaise(true);

        horizontalLayout_4->addWidget(Save);

        SaveAs = new QToolButton(DVUIfilemenu);
        SaveAs->setObjectName(QStringLiteral("SaveAs"));
        QPalette palette6;
        SaveAs->setPalette(palette6);
        QIcon icon5;
        icon5.addFile(QStringLiteral("../large icons/SaveAs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SaveAs->setIcon(icon5);
        SaveAs->setIconSize(QSize(32, 32));
        SaveAs->setToolButtonStyle(Qt::ToolButtonIconOnly);
        SaveAs->setAutoRaise(true);

        horizontalLayout_4->addWidget(SaveAs);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        line_2 = new QFrame(DVUIfilemenu);
        line_2->setObjectName(QStringLiteral("line_2"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        line_2->setPalette(palette7);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ImportData = new QToolButton(DVUIfilemenu);
        ImportData->setObjectName(QStringLiteral("ImportData"));
        QPalette palette8;
        ImportData->setPalette(palette8);
        QIcon icon6;
        icon6.addFile(QStringLiteral("../large icons/import-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        ImportData->setIcon(icon6);
        ImportData->setIconSize(QSize(32, 32));
        ImportData->setToolButtonStyle(Qt::ToolButtonIconOnly);
        ImportData->setAutoRaise(true);

        horizontalLayout_5->addWidget(ImportData);

        MergeData = new QToolButton(DVUIfilemenu);
        MergeData->setObjectName(QStringLiteral("MergeData"));
        QPalette palette9;
        MergeData->setPalette(palette9);
        QIcon icon7;
        icon7.addFile(QStringLiteral("../large icons/merge data.png"), QSize(), QIcon::Normal, QIcon::Off);
        MergeData->setIcon(icon7);
        MergeData->setIconSize(QSize(36, 36));
        MergeData->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MergeData->setAutoRaise(true);

        horizontalLayout_5->addWidget(MergeData);

        ExportData = new QToolButton(DVUIfilemenu);
        ExportData->setObjectName(QStringLiteral("ExportData"));
        QPalette palette10;
        ExportData->setPalette(palette10);
        QIcon icon8;
        icon8.addFile(QStringLiteral("../large icons/export-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExportData->setIcon(icon8);
        ExportData->setIconSize(QSize(32, 32));
        ExportData->setToolButtonStyle(Qt::ToolButtonIconOnly);
        ExportData->setAutoRaise(true);

        horizontalLayout_5->addWidget(ExportData);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        line_3 = new QFrame(DVUIfilemenu);
        line_3->setObjectName(QStringLiteral("line_3"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        line_3->setPalette(palette11);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        PrintPreview = new QToolButton(DVUIfilemenu);
        PrintPreview->setObjectName(QStringLiteral("PrintPreview"));
        QPalette palette12;
        PrintPreview->setPalette(palette12);
        QIcon icon9;
        icon9.addFile(QStringLiteral("../large icons/print preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        PrintPreview->setIcon(icon9);
        PrintPreview->setIconSize(QSize(32, 32));
        PrintPreview->setToolButtonStyle(Qt::ToolButtonIconOnly);
        PrintPreview->setAutoRaise(true);

        horizontalLayout->addWidget(PrintPreview);

        Print = new QToolButton(DVUIfilemenu);
        Print->setObjectName(QStringLiteral("Print"));
        QPalette palette13;
        Print->setPalette(palette13);
        QIcon icon10;
        icon10.addFile(QStringLiteral("../large icons/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        Print->setIcon(icon10);
        Print->setIconSize(QSize(32, 32));
        Print->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Print->setAutoRaise(true);

        horizontalLayout->addWidget(Print);


        horizontalLayout_3->addLayout(horizontalLayout);

        line_4 = new QFrame(DVUIfilemenu);
        line_4->setObjectName(QStringLiteral("line_4"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        line_4->setPalette(palette14);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_4);

        toolButton_3 = new QToolButton(DVUIfilemenu);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        QPalette palette15;
        toolButton_3->setPalette(palette15);
        QIcon icon11;
        icon11.addFile(QStringLiteral("../large icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon11);
        toolButton_3->setIconSize(QSize(24, 24));
        toolButton_3->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_3->setAutoRaise(true);

        horizontalLayout_3->addWidget(toolButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        retranslateUi(DVUIfilemenu);

        QMetaObject::connectSlotsByName(DVUIfilemenu);
    } // setupUi

    void retranslateUi(QWidget *DVUIfilemenu)
    {
        DVUIfilemenu->setWindowTitle(QApplication::translate("DVUIfilemenu", "Filemenu", nullptr));
#ifndef QT_NO_TOOLTIP
        New->setToolTip(QApplication::translate("DVUIfilemenu", "New", nullptr));
#endif // QT_NO_TOOLTIP
        New->setText(QString());
#ifndef QT_NO_TOOLTIP
        Open->setToolTip(QApplication::translate("DVUIfilemenu", "Open", nullptr));
#endif // QT_NO_TOOLTIP
        Open->setText(QString());
#ifndef QT_NO_TOOLTIP
        OpenfromCloud->setToolTip(QApplication::translate("DVUIfilemenu", "Open from Cloud", nullptr));
#endif // QT_NO_TOOLTIP
        OpenfromCloud->setText(QString());
#ifndef QT_NO_TOOLTIP
        Close->setToolTip(QApplication::translate("DVUIfilemenu", "Close", nullptr));
#endif // QT_NO_TOOLTIP
        Close->setText(QApplication::translate("DVUIfilemenu", "Close", nullptr));
#ifndef QT_NO_TOOLTIP
        Save->setToolTip(QApplication::translate("DVUIfilemenu", "Save", nullptr));
#endif // QT_NO_TOOLTIP
        Save->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveAs->setToolTip(QApplication::translate("DVUIfilemenu", "Save As", nullptr));
#endif // QT_NO_TOOLTIP
        SaveAs->setText(QString());
#ifndef QT_NO_TOOLTIP
        ImportData->setToolTip(QApplication::translate("DVUIfilemenu", "Import Data", nullptr));
#endif // QT_NO_TOOLTIP
        ImportData->setText(QString());
#ifndef QT_NO_TOOLTIP
        MergeData->setToolTip(QApplication::translate("DVUIfilemenu", "Merge Data", nullptr));
#endif // QT_NO_TOOLTIP
        MergeData->setText(QString());
#ifndef QT_NO_TOOLTIP
        ExportData->setToolTip(QApplication::translate("DVUIfilemenu", "Export Data", nullptr));
#endif // QT_NO_TOOLTIP
        ExportData->setText(QString());
#ifndef QT_NO_TOOLTIP
        PrintPreview->setToolTip(QApplication::translate("DVUIfilemenu", "Print Preview", nullptr));
#endif // QT_NO_TOOLTIP
        PrintPreview->setText(QString());
#ifndef QT_NO_TOOLTIP
        Print->setToolTip(QApplication::translate("DVUIfilemenu", "Print", nullptr));
#endif // QT_NO_TOOLTIP
        Print->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_3->setToolTip(QApplication::translate("DVUIfilemenu", "Exit", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DVUIfilemenu: public Ui_DVUIfilemenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEMENU_H
