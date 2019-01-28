/********************************************************************************
** Form generated from reading UI file 'editmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMENU_H
#define UI_EDITMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVUIEditMenu
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *Undo;
    QToolButton *Redo;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *BringtoFront;
    QToolButton *SendtoBack;
    QToolButton *BringForward;
    QToolButton *SendBackward;
    QToolButton *AlignLeft;
    QToolButton *AlignRight;
    QToolButton *AlignBottom;
    QToolButton *AlignTop;
    QToolButton *AlignHorizontally;
    QToolButton *AlignVertically;
    QLabel *Arrange;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *Stamp;
    QToolButton *Translate;
    QToolButton *Scale;
    QToolButton *Rotate;
    QToolButton *Align;
    QToolButton *Mirror;
    QLabel *label_2;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *SelectAll;
    QToolButton *PolygonSelect;
    QToolButton *toolButton_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DVUIEditMenu)
    {
        if (DVUIEditMenu->objectName().isEmpty())
            DVUIEditMenu->setObjectName(QStringLiteral("DVUIEditMenu"));
        DVUIEditMenu->resize(1099, 89);
        horizontalLayout_4 = new QHBoxLayout(DVUIEditMenu);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Undo = new QToolButton(DVUIEditMenu);
        Undo->setObjectName(QStringLiteral("Undo"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/Undo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Undo->setIcon(icon);
        Undo->setIconSize(QSize(32, 32));
        Undo->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Undo->setAutoRaise(true);

        horizontalLayout_5->addWidget(Undo);

        Redo = new QToolButton(DVUIEditMenu);
        Redo->setObjectName(QStringLiteral("Redo"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/Redo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Redo->setIcon(icon1);
        Redo->setIconSize(QSize(32, 32));
        Redo->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Redo->setAutoRaise(true);

        horizontalLayout_5->addWidget(Redo);


        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_6);

        line = new QFrame(DVUIEditMenu);
        line->setObjectName(QStringLiteral("line"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        line->setPalette(palette);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        BringtoFront = new QToolButton(DVUIEditMenu);
        BringtoFront->setObjectName(QStringLiteral("BringtoFront"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/BringToFront.svg"), QSize(), QIcon::Normal, QIcon::Off);
        BringtoFront->setIcon(icon2);
        BringtoFront->setIconSize(QSize(32, 32));
        BringtoFront->setToolButtonStyle(Qt::ToolButtonIconOnly);
        BringtoFront->setAutoRaise(true);

        horizontalLayout_3->addWidget(BringtoFront);

        SendtoBack = new QToolButton(DVUIEditMenu);
        SendtoBack->setObjectName(QStringLiteral("SendtoBack"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../large icons/SendToBack.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SendtoBack->setIcon(icon3);
        SendtoBack->setIconSize(QSize(32, 32));
        SendtoBack->setToolButtonStyle(Qt::ToolButtonIconOnly);
        SendtoBack->setAutoRaise(true);

        horizontalLayout_3->addWidget(SendtoBack);

        BringForward = new QToolButton(DVUIEditMenu);
        BringForward->setObjectName(QStringLiteral("BringForward"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../large icons/BringForward.svg"), QSize(), QIcon::Normal, QIcon::Off);
        BringForward->setIcon(icon4);
        BringForward->setIconSize(QSize(32, 32));
        BringForward->setToolButtonStyle(Qt::ToolButtonIconOnly);
        BringForward->setAutoRaise(true);

        horizontalLayout_3->addWidget(BringForward);

        SendBackward = new QToolButton(DVUIEditMenu);
        SendBackward->setObjectName(QStringLiteral("SendBackward"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../large icons/SendBackward.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SendBackward->setIcon(icon5);
        SendBackward->setIconSize(QSize(32, 32));
        SendBackward->setToolButtonStyle(Qt::ToolButtonIconOnly);
        SendBackward->setAutoRaise(true);

        horizontalLayout_3->addWidget(SendBackward);

        AlignLeft = new QToolButton(DVUIEditMenu);
        AlignLeft->setObjectName(QStringLiteral("AlignLeft"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../large icons/AlignLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AlignLeft->setIcon(icon6);
        AlignLeft->setIconSize(QSize(32, 32));
        AlignLeft->setToolButtonStyle(Qt::ToolButtonIconOnly);
        AlignLeft->setAutoRaise(true);

        horizontalLayout_3->addWidget(AlignLeft);

        AlignRight = new QToolButton(DVUIEditMenu);
        AlignRight->setObjectName(QStringLiteral("AlignRight"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../large icons/AlignRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AlignRight->setIcon(icon7);
        AlignRight->setIconSize(QSize(32, 32));
        AlignRight->setToolButtonStyle(Qt::ToolButtonIconOnly);
        AlignRight->setAutoRaise(true);

        horizontalLayout_3->addWidget(AlignRight);

        AlignBottom = new QToolButton(DVUIEditMenu);
        AlignBottom->setObjectName(QStringLiteral("AlignBottom"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../large icons/AlignBottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AlignBottom->setIcon(icon8);
        AlignBottom->setIconSize(QSize(32, 32));
        AlignBottom->setToolButtonStyle(Qt::ToolButtonIconOnly);
        AlignBottom->setAutoRaise(true);

        horizontalLayout_3->addWidget(AlignBottom);

        AlignTop = new QToolButton(DVUIEditMenu);
        AlignTop->setObjectName(QStringLiteral("AlignTop"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../large icons/AlignTop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AlignTop->setIcon(icon9);
        AlignTop->setIconSize(QSize(32, 32));
        AlignTop->setToolButtonStyle(Qt::ToolButtonIconOnly);
        AlignTop->setAutoRaise(true);

        horizontalLayout_3->addWidget(AlignTop);

        AlignHorizontally = new QToolButton(DVUIEditMenu);
        AlignHorizontally->setObjectName(QStringLiteral("AlignHorizontally"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../large icons/AlignHorizontal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AlignHorizontally->setIcon(icon10);
        AlignHorizontally->setIconSize(QSize(32, 32));
        AlignHorizontally->setToolButtonStyle(Qt::ToolButtonIconOnly);
        AlignHorizontally->setAutoRaise(true);

        horizontalLayout_3->addWidget(AlignHorizontally);

        AlignVertically = new QToolButton(DVUIEditMenu);
        AlignVertically->setObjectName(QStringLiteral("AlignVertically"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../large icons/AlignVertical.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AlignVertically->setIcon(icon11);
        AlignVertically->setIconSize(QSize(32, 32));
        AlignVertically->setToolButtonStyle(Qt::ToolButtonIconOnly);
        AlignVertically->setAutoRaise(true);

        horizontalLayout_3->addWidget(AlignVertically);


        verticalLayout->addLayout(horizontalLayout_3);

        Arrange = new QLabel(DVUIEditMenu);
        Arrange->setObjectName(QStringLiteral("Arrange"));
        Arrange->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Arrange);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        line_2 = new QFrame(DVUIEditMenu);
        line_2->setObjectName(QStringLiteral("line_2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        line_2->setPalette(palette1);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Stamp = new QToolButton(DVUIEditMenu);
        Stamp->setObjectName(QStringLiteral("Stamp"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../large icons/Stamp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Stamp->setIcon(icon12);
        Stamp->setIconSize(QSize(32, 32));
        Stamp->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Stamp->setAutoRaise(true);

        horizontalLayout_6->addWidget(Stamp);

        Translate = new QToolButton(DVUIEditMenu);
        Translate->setObjectName(QStringLiteral("Translate"));
        QIcon icon13;
        icon13.addFile(QStringLiteral("../large icons/Translate.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Translate->setIcon(icon13);
        Translate->setIconSize(QSize(32, 32));
        Translate->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Translate->setAutoRaise(true);

        horizontalLayout_6->addWidget(Translate);

        Scale = new QToolButton(DVUIEditMenu);
        Scale->setObjectName(QStringLiteral("Scale"));
        QIcon icon14;
        icon14.addFile(QStringLiteral("../large icons/Scale.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Scale->setIcon(icon14);
        Scale->setIconSize(QSize(32, 32));
        Scale->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Scale->setAutoRaise(true);

        horizontalLayout_6->addWidget(Scale);

        Rotate = new QToolButton(DVUIEditMenu);
        Rotate->setObjectName(QStringLiteral("Rotate"));
        QIcon icon15;
        icon15.addFile(QStringLiteral("../large icons/Rotate.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Rotate->setIcon(icon15);
        Rotate->setIconSize(QSize(32, 32));
        Rotate->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Rotate->setAutoRaise(true);

        horizontalLayout_6->addWidget(Rotate);

        Align = new QToolButton(DVUIEditMenu);
        Align->setObjectName(QStringLiteral("Align"));
        QIcon icon16;
        icon16.addFile(QStringLiteral("../large icons/Align.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Align->setIcon(icon16);
        Align->setIconSize(QSize(32, 32));
        Align->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Align->setAutoRaise(true);

        horizontalLayout_6->addWidget(Align);

        Mirror = new QToolButton(DVUIEditMenu);
        Mirror->setObjectName(QStringLiteral("Mirror"));
        QIcon icon17;
        icon17.addFile(QStringLiteral("../large icons/Mirror.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Mirror->setIcon(icon17);
        Mirror->setIconSize(QSize(32, 32));
        Mirror->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Mirror->setAutoRaise(true);

        horizontalLayout_6->addWidget(Mirror);


        verticalLayout_3->addLayout(horizontalLayout_6);

        label_2 = new QLabel(DVUIEditMenu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

        line_3 = new QFrame(DVUIEditMenu);
        line_3->setObjectName(QStringLiteral("line_3"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        line_3->setPalette(palette2);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        SelectAll = new QToolButton(DVUIEditMenu);
        SelectAll->setObjectName(QStringLiteral("SelectAll"));
        QIcon icon18;
        icon18.addFile(QStringLiteral("../large icons/SelectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SelectAll->setIcon(icon18);
        SelectAll->setIconSize(QSize(32, 32));
        SelectAll->setToolButtonStyle(Qt::ToolButtonIconOnly);
        SelectAll->setAutoRaise(true);

        horizontalLayout_8->addWidget(SelectAll);

        PolygonSelect = new QToolButton(DVUIEditMenu);
        PolygonSelect->setObjectName(QStringLiteral("PolygonSelect"));
        QIcon icon19;
        icon19.addFile(QStringLiteral("../large icons/PolygonSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        PolygonSelect->setIcon(icon19);
        PolygonSelect->setIconSize(QSize(32, 32));
        PolygonSelect->setToolButtonStyle(Qt::ToolButtonIconOnly);
        PolygonSelect->setAutoRaise(true);

        horizontalLayout_8->addWidget(PolygonSelect);

        toolButton_3 = new QToolButton(DVUIEditMenu);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        QIcon icon20;
        icon20.addFile(QStringLiteral("../large icons/Marquee.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon20);
        toolButton_3->setIconSize(QSize(32, 32));
        toolButton_3->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_3->setAutoRaise(true);

        horizontalLayout_8->addWidget(toolButton_3);


        verticalLayout_5->addLayout(horizontalLayout_8);

        label = new QLabel(DVUIEditMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);


        horizontalLayout_4->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        retranslateUi(DVUIEditMenu);

        QMetaObject::connectSlotsByName(DVUIEditMenu);
    } // setupUi

    void retranslateUi(QWidget *DVUIEditMenu)
    {
        DVUIEditMenu->setWindowTitle(QApplication::translate("DVUIEditMenu", "EditMenu", nullptr));
#ifndef QT_NO_TOOLTIP
        DVUIEditMenu->setToolTip(QApplication::translate("DVUIEditMenu", "Align Vertically", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Undo->setToolTip(QApplication::translate("DVUIEditMenu", "Undo", nullptr));
#endif // QT_NO_TOOLTIP
        Undo->setText(QString());
#ifndef QT_NO_TOOLTIP
        Redo->setToolTip(QApplication::translate("DVUIEditMenu", "Redo", nullptr));
#endif // QT_NO_TOOLTIP
        Redo->setText(QString());
#ifndef QT_NO_TOOLTIP
        BringtoFront->setToolTip(QApplication::translate("DVUIEditMenu", "Bring to Front", nullptr));
#endif // QT_NO_TOOLTIP
        BringtoFront->setText(QString());
#ifndef QT_NO_TOOLTIP
        SendtoBack->setToolTip(QApplication::translate("DVUIEditMenu", "Move to Back", nullptr));
#endif // QT_NO_TOOLTIP
        SendtoBack->setText(QString());
#ifndef QT_NO_TOOLTIP
        BringForward->setToolTip(QApplication::translate("DVUIEditMenu", "Bring Forward", nullptr));
#endif // QT_NO_TOOLTIP
        BringForward->setText(QString());
#ifndef QT_NO_TOOLTIP
        SendBackward->setToolTip(QApplication::translate("DVUIEditMenu", "Send Backward", nullptr));
#endif // QT_NO_TOOLTIP
        SendBackward->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignLeft->setToolTip(QApplication::translate("DVUIEditMenu", "Align Left", nullptr));
#endif // QT_NO_TOOLTIP
        AlignLeft->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignRight->setToolTip(QApplication::translate("DVUIEditMenu", "Align Right", nullptr));
#endif // QT_NO_TOOLTIP
        AlignRight->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignBottom->setToolTip(QApplication::translate("DVUIEditMenu", "Align Bottom", nullptr));
#endif // QT_NO_TOOLTIP
        AlignBottom->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignTop->setToolTip(QApplication::translate("DVUIEditMenu", "Align Top", nullptr));
#endif // QT_NO_TOOLTIP
        AlignTop->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignHorizontally->setToolTip(QApplication::translate("DVUIEditMenu", "Align Horizontally", nullptr));
#endif // QT_NO_TOOLTIP
        AlignHorizontally->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignVertically->setToolTip(QApplication::translate("DVUIEditMenu", "Align Vertically", nullptr));
#endif // QT_NO_TOOLTIP
        AlignVertically->setText(QString());
        Arrange->setText(QApplication::translate("DVUIEditMenu", "Arrange", nullptr));
#ifndef QT_NO_TOOLTIP
        Stamp->setToolTip(QApplication::translate("DVUIEditMenu", "Stamp", nullptr));
#endif // QT_NO_TOOLTIP
        Stamp->setText(QString());
#ifndef QT_NO_TOOLTIP
        Translate->setToolTip(QApplication::translate("DVUIEditMenu", "Translate", nullptr));
#endif // QT_NO_TOOLTIP
        Translate->setText(QString());
#ifndef QT_NO_TOOLTIP
        Scale->setToolTip(QApplication::translate("DVUIEditMenu", "Scale", nullptr));
#endif // QT_NO_TOOLTIP
        Scale->setText(QString());
#ifndef QT_NO_TOOLTIP
        Rotate->setToolTip(QApplication::translate("DVUIEditMenu", "Rotate", nullptr));
#endif // QT_NO_TOOLTIP
        Rotate->setText(QString());
#ifndef QT_NO_TOOLTIP
        Align->setToolTip(QApplication::translate("DVUIEditMenu", "Align", nullptr));
#endif // QT_NO_TOOLTIP
        Align->setText(QString());
#ifndef QT_NO_TOOLTIP
        Mirror->setToolTip(QApplication::translate("DVUIEditMenu", "Mirror", nullptr));
#endif // QT_NO_TOOLTIP
        Mirror->setText(QString());
        label_2->setText(QApplication::translate("DVUIEditMenu", "Transform", nullptr));
#ifndef QT_NO_TOOLTIP
        SelectAll->setToolTip(QApplication::translate("DVUIEditMenu", "All", nullptr));
#endif // QT_NO_TOOLTIP
        SelectAll->setText(QString());
#ifndef QT_NO_TOOLTIP
        PolygonSelect->setToolTip(QApplication::translate("DVUIEditMenu", "Polygon", nullptr));
#endif // QT_NO_TOOLTIP
        PolygonSelect->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_3->setToolTip(QApplication::translate("DVUIEditMenu", "Marquee", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_3->setText(QString());
        label->setText(QApplication::translate("DVUIEditMenu", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUIEditMenu: public Ui_DVUIEditMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMENU_H
