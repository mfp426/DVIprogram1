/********************************************************************************
** Form generated from reading UI file 'drawmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWMENU_H
#define UI_DRAWMENU_H

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

class Ui_DVUIDrawMenu
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *LineSegments;
    QToolButton *Polylines;
    QToolButton *Curves;
    QToolButton *Arcs;
    QLabel *Lines;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *Rectangles;
    QToolButton *Polygons;
    QLabel *Polygons_2;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *CenterSideCircle;
    QToolButton *SideSideCircle;
    QToolButton *ThreePointCircle;
    QToolButton *CenterRadius;
    QToolButton *CircleTangent2;
    QToolButton *CircleTangent3;
    QToolButton *EllipseRectangle;
    QToolButton *EllipseAxis;
    QLabel *Circles_2;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *Points;
    QToolButton *Markers;
    QLabel *Points_2;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *Cubes;
    QToolButton *Cylinders;
    QToolButton *Spheres;
    QToolButton *Pyramids;
    QLabel *Shapes;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DVUIDrawMenu)
    {
        if (DVUIDrawMenu->objectName().isEmpty())
            DVUIDrawMenu->setObjectName(QStringLiteral("DVUIDrawMenu"));
        DVUIDrawMenu->resize(1150, 96);
        DVUIDrawMenu->setMouseTracking(true);
        horizontalLayout = new QHBoxLayout(DVUIDrawMenu);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        LineSegments = new QToolButton(DVUIDrawMenu);
        LineSegments->setObjectName(QStringLiteral("LineSegments"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/LineSegments.svg"), QSize(), QIcon::Normal, QIcon::Off);
        LineSegments->setIcon(icon);
        LineSegments->setIconSize(QSize(32, 32));
        LineSegments->setAutoRaise(true);

        horizontalLayout_2->addWidget(LineSegments);

        Polylines = new QToolButton(DVUIDrawMenu);
        Polylines->setObjectName(QStringLiteral("Polylines"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/Polylines.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Polylines->setIcon(icon1);
        Polylines->setIconSize(QSize(32, 32));
        Polylines->setAutoRaise(true);

        horizontalLayout_2->addWidget(Polylines);

        Curves = new QToolButton(DVUIDrawMenu);
        Curves->setObjectName(QStringLiteral("Curves"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/Curves.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Curves->setIcon(icon2);
        Curves->setIconSize(QSize(32, 32));
        Curves->setAutoRaise(true);

        horizontalLayout_2->addWidget(Curves);

        Arcs = new QToolButton(DVUIDrawMenu);
        Arcs->setObjectName(QStringLiteral("Arcs"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../large icons/Arcs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Arcs->setIcon(icon3);
        Arcs->setIconSize(QSize(32, 32));
        Arcs->setAutoRaise(true);

        horizontalLayout_2->addWidget(Arcs);


        verticalLayout->addLayout(horizontalLayout_2);

        Lines = new QLabel(DVUIDrawMenu);
        Lines->setObjectName(QStringLiteral("Lines"));
        Lines->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Lines);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(DVUIDrawMenu);
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

        horizontalLayout->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Rectangles = new QToolButton(DVUIDrawMenu);
        Rectangles->setObjectName(QStringLiteral("Rectangles"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../large icons/Rectangles.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Rectangles->setIcon(icon4);
        Rectangles->setIconSize(QSize(32, 32));
        Rectangles->setAutoRaise(true);

        horizontalLayout_3->addWidget(Rectangles);

        Polygons = new QToolButton(DVUIDrawMenu);
        Polygons->setObjectName(QStringLiteral("Polygons"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../large icons/Polygons.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Polygons->setIcon(icon5);
        Polygons->setIconSize(QSize(32, 32));
        Polygons->setAutoRaise(true);

        horizontalLayout_3->addWidget(Polygons);


        verticalLayout_2->addLayout(horizontalLayout_3);

        Polygons_2 = new QLabel(DVUIDrawMenu);
        Polygons_2->setObjectName(QStringLiteral("Polygons_2"));
        Polygons_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Polygons_2);


        horizontalLayout->addLayout(verticalLayout_2);

        line_2 = new QFrame(DVUIDrawMenu);
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

        horizontalLayout->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        CenterSideCircle = new QToolButton(DVUIDrawMenu);
        CenterSideCircle->setObjectName(QStringLiteral("CenterSideCircle"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../large icons/CenterSideCircle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CenterSideCircle->setIcon(icon6);
        CenterSideCircle->setIconSize(QSize(32, 32));
        CenterSideCircle->setAutoRaise(true);

        horizontalLayout_4->addWidget(CenterSideCircle);

        SideSideCircle = new QToolButton(DVUIDrawMenu);
        SideSideCircle->setObjectName(QStringLiteral("SideSideCircle"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../large icons/SideSideCircle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SideSideCircle->setIcon(icon7);
        SideSideCircle->setIconSize(QSize(32, 32));
        SideSideCircle->setAutoRaise(true);

        horizontalLayout_4->addWidget(SideSideCircle);

        ThreePointCircle = new QToolButton(DVUIDrawMenu);
        ThreePointCircle->setObjectName(QStringLiteral("ThreePointCircle"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../large icons/3PointCircle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ThreePointCircle->setIcon(icon8);
        ThreePointCircle->setIconSize(QSize(32, 32));
        ThreePointCircle->setAutoRaise(true);

        horizontalLayout_4->addWidget(ThreePointCircle);

        CenterRadius = new QToolButton(DVUIDrawMenu);
        CenterRadius->setObjectName(QStringLiteral("CenterRadius"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../large icons/CenterRadiusCircle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CenterRadius->setIcon(icon9);
        CenterRadius->setIconSize(QSize(32, 32));
        CenterRadius->setAutoRaise(true);

        horizontalLayout_4->addWidget(CenterRadius);

        CircleTangent2 = new QToolButton(DVUIDrawMenu);
        CircleTangent2->setObjectName(QStringLiteral("CircleTangent2"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../large icons/CircleTangent2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CircleTangent2->setIcon(icon10);
        CircleTangent2->setIconSize(QSize(32, 32));
        CircleTangent2->setAutoRaise(true);

        horizontalLayout_4->addWidget(CircleTangent2);

        CircleTangent3 = new QToolButton(DVUIDrawMenu);
        CircleTangent3->setObjectName(QStringLiteral("CircleTangent3"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../large icons/CircleTangent3.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CircleTangent3->setIcon(icon11);
        CircleTangent3->setIconSize(QSize(32, 32));
        CircleTangent3->setAutoRaise(true);

        horizontalLayout_4->addWidget(CircleTangent3);

        EllipseRectangle = new QToolButton(DVUIDrawMenu);
        EllipseRectangle->setObjectName(QStringLiteral("EllipseRectangle"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../large icons/EllipseRectangle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EllipseRectangle->setIcon(icon12);
        EllipseRectangle->setIconSize(QSize(32, 32));
        EllipseRectangle->setAutoRaise(true);

        horizontalLayout_4->addWidget(EllipseRectangle);

        EllipseAxis = new QToolButton(DVUIDrawMenu);
        EllipseAxis->setObjectName(QStringLiteral("EllipseAxis"));
        QIcon icon13;
        icon13.addFile(QStringLiteral("../large icons/EllipseAxis.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EllipseAxis->setIcon(icon13);
        EllipseAxis->setIconSize(QSize(32, 32));
        EllipseAxis->setAutoRaise(true);

        horizontalLayout_4->addWidget(EllipseAxis);


        verticalLayout_3->addLayout(horizontalLayout_4);

        Circles_2 = new QLabel(DVUIDrawMenu);
        Circles_2->setObjectName(QStringLiteral("Circles_2"));
        Circles_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Circles_2);


        horizontalLayout->addLayout(verticalLayout_3);

        line_3 = new QFrame(DVUIDrawMenu);
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

        horizontalLayout->addWidget(line_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Points = new QToolButton(DVUIDrawMenu);
        Points->setObjectName(QStringLiteral("Points"));
        QIcon icon14;
        icon14.addFile(QStringLiteral("../large icons/Points.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Points->setIcon(icon14);
        Points->setIconSize(QSize(32, 32));
        Points->setAutoRaise(true);

        horizontalLayout_5->addWidget(Points);

        Markers = new QToolButton(DVUIDrawMenu);
        Markers->setObjectName(QStringLiteral("Markers"));
        QIcon icon15;
        icon15.addFile(QStringLiteral("../large icons/Markers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Markers->setIcon(icon15);
        Markers->setIconSize(QSize(32, 32));
        Markers->setAutoRaise(true);

        horizontalLayout_5->addWidget(Markers);


        verticalLayout_4->addLayout(horizontalLayout_5);

        Points_2 = new QLabel(DVUIDrawMenu);
        Points_2->setObjectName(QStringLiteral("Points_2"));
        Points_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(Points_2);


        horizontalLayout->addLayout(verticalLayout_4);

        line_4 = new QFrame(DVUIDrawMenu);
        line_4->setObjectName(QStringLiteral("line_4"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
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
        line_4->setPalette(palette3);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Cubes = new QToolButton(DVUIDrawMenu);
        Cubes->setObjectName(QStringLiteral("Cubes"));
        QIcon icon16;
        icon16.addFile(QStringLiteral("../large icons/Cubes.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Cubes->setIcon(icon16);
        Cubes->setIconSize(QSize(32, 32));
        Cubes->setAutoRaise(true);

        horizontalLayout_6->addWidget(Cubes);

        Cylinders = new QToolButton(DVUIDrawMenu);
        Cylinders->setObjectName(QStringLiteral("Cylinders"));
        QIcon icon17;
        icon17.addFile(QStringLiteral("../large icons/Cylinders.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Cylinders->setIcon(icon17);
        Cylinders->setIconSize(QSize(32, 32));
        Cylinders->setAutoRaise(true);

        horizontalLayout_6->addWidget(Cylinders);

        Spheres = new QToolButton(DVUIDrawMenu);
        Spheres->setObjectName(QStringLiteral("Spheres"));
        QIcon icon18;
        icon18.addFile(QStringLiteral("../large icons/Spheres.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Spheres->setIcon(icon18);
        Spheres->setIconSize(QSize(32, 32));
        Spheres->setAutoRaise(true);

        horizontalLayout_6->addWidget(Spheres);

        Pyramids = new QToolButton(DVUIDrawMenu);
        Pyramids->setObjectName(QStringLiteral("Pyramids"));
        QIcon icon19;
        icon19.addFile(QStringLiteral("../large icons/Pyramids.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Pyramids->setIcon(icon19);
        Pyramids->setIconSize(QSize(32, 32));
        Pyramids->setToolButtonStyle(Qt::ToolButtonIconOnly);
        Pyramids->setAutoRaise(true);

        horizontalLayout_6->addWidget(Pyramids);


        verticalLayout_5->addLayout(horizontalLayout_6);

        Shapes = new QLabel(DVUIDrawMenu);
        Shapes->setObjectName(QStringLiteral("Shapes"));
        Shapes->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Shapes);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(DVUIDrawMenu);

        QMetaObject::connectSlotsByName(DVUIDrawMenu);
    } // setupUi

    void retranslateUi(QWidget *DVUIDrawMenu)
    {
        DVUIDrawMenu->setWindowTitle(QApplication::translate("DVUIDrawMenu", "DrawMenu", nullptr));
#ifndef QT_NO_TOOLTIP
        LineSegments->setToolTip(QApplication::translate("DVUIDrawMenu", "Line Segments", nullptr));
#endif // QT_NO_TOOLTIP
        LineSegments->setText(QString());
#ifndef QT_NO_TOOLTIP
        Polylines->setToolTip(QApplication::translate("DVUIDrawMenu", "Polylines", nullptr));
#endif // QT_NO_TOOLTIP
        Polylines->setText(QString());
#ifndef QT_NO_TOOLTIP
        Curves->setToolTip(QApplication::translate("DVUIDrawMenu", "Curves", nullptr));
#endif // QT_NO_TOOLTIP
        Curves->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arcs->setToolTip(QApplication::translate("DVUIDrawMenu", "Arcs", nullptr));
#endif // QT_NO_TOOLTIP
        Arcs->setText(QString());
        Lines->setText(QApplication::translate("DVUIDrawMenu", "Lines", nullptr));
#ifndef QT_NO_TOOLTIP
        Rectangles->setToolTip(QApplication::translate("DVUIDrawMenu", "Rectangles", nullptr));
#endif // QT_NO_TOOLTIP
        Rectangles->setText(QString());
#ifndef QT_NO_TOOLTIP
        Polygons->setToolTip(QApplication::translate("DVUIDrawMenu", "Polygons", nullptr));
#endif // QT_NO_TOOLTIP
        Polygons->setText(QString());
        Polygons_2->setText(QApplication::translate("DVUIDrawMenu", "Polygons", nullptr));
#ifndef QT_NO_TOOLTIP
        CenterSideCircle->setToolTip(QApplication::translate("DVUIDrawMenu", "Center, Side Circle", nullptr));
#endif // QT_NO_TOOLTIP
        CenterSideCircle->setText(QString());
#ifndef QT_NO_TOOLTIP
        SideSideCircle->setToolTip(QApplication::translate("DVUIDrawMenu", "Side,Side Circle", nullptr));
#endif // QT_NO_TOOLTIP
        SideSideCircle->setText(QString());
#ifndef QT_NO_TOOLTIP
        ThreePointCircle->setToolTip(QApplication::translate("DVUIDrawMenu", "3 Point Circle", nullptr));
#endif // QT_NO_TOOLTIP
        ThreePointCircle->setText(QString());
#ifndef QT_NO_TOOLTIP
        CenterRadius->setToolTip(QApplication::translate("DVUIDrawMenu", "Center Radius", nullptr));
#endif // QT_NO_TOOLTIP
        CenterRadius->setText(QString());
#ifndef QT_NO_TOOLTIP
        CircleTangent2->setToolTip(QApplication::translate("DVUIDrawMenu", "Circle Tangent 2", nullptr));
#endif // QT_NO_TOOLTIP
        CircleTangent2->setText(QString());
#ifndef QT_NO_TOOLTIP
        CircleTangent3->setToolTip(QApplication::translate("DVUIDrawMenu", "Circle Tangent 3", nullptr));
#endif // QT_NO_TOOLTIP
        CircleTangent3->setText(QString());
#ifndef QT_NO_TOOLTIP
        EllipseRectangle->setToolTip(QApplication::translate("DVUIDrawMenu", "Ellipse Rectangle", nullptr));
#endif // QT_NO_TOOLTIP
        EllipseRectangle->setText(QString());
#ifndef QT_NO_TOOLTIP
        EllipseAxis->setToolTip(QApplication::translate("DVUIDrawMenu", "Ellipse Axis", nullptr));
#endif // QT_NO_TOOLTIP
        EllipseAxis->setText(QString());
        Circles_2->setText(QApplication::translate("DVUIDrawMenu", "Circles/Ellipses", nullptr));
#ifndef QT_NO_TOOLTIP
        Points->setToolTip(QApplication::translate("DVUIDrawMenu", "Points", nullptr));
#endif // QT_NO_TOOLTIP
        Points->setText(QString());
#ifndef QT_NO_TOOLTIP
        Markers->setToolTip(QApplication::translate("DVUIDrawMenu", "Markers", nullptr));
#endif // QT_NO_TOOLTIP
        Markers->setText(QString());
        Points_2->setText(QApplication::translate("DVUIDrawMenu", "Points", nullptr));
#ifndef QT_NO_TOOLTIP
        Cubes->setToolTip(QApplication::translate("DVUIDrawMenu", "Cubrs", nullptr));
#endif // QT_NO_TOOLTIP
        Cubes->setText(QString());
#ifndef QT_NO_TOOLTIP
        Cylinders->setToolTip(QApplication::translate("DVUIDrawMenu", "Cylinders", nullptr));
#endif // QT_NO_TOOLTIP
        Cylinders->setText(QString());
#ifndef QT_NO_TOOLTIP
        Spheres->setToolTip(QApplication::translate("DVUIDrawMenu", "Spheres", nullptr));
#endif // QT_NO_TOOLTIP
        Spheres->setText(QString());
#ifndef QT_NO_TOOLTIP
        Pyramids->setToolTip(QApplication::translate("DVUIDrawMenu", "Pyramids", nullptr));
#endif // QT_NO_TOOLTIP
        Pyramids->setText(QString());
        Shapes->setText(QApplication::translate("DVUIDrawMenu", "Shapes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUIDrawMenu: public Ui_DVUIDrawMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWMENU_H
