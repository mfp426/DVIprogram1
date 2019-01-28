/********************************************************************************
** Form generated from reading UI file 'dvuihomewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DVUIHOMEWIDGET_H
#define UI_DVUIHOMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVUIhomewidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout;
    QLabel *Layers;
    QComboBox *LayersComboBox;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *Layers_3;
    QLabel *Layers_2;
    QFrame *line;
    QVBoxLayout *Snaps;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_9;
    QToolButton *toolButton_10;
    QToolButton *toolButton_11;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_8;
    QToolButton *toolButton_13;
    QToolButton *toolButton_12;
    QLabel *Snaps_2;
    QFrame *line_2;
    QToolButton *Paste;
    QVBoxLayout *verticalLayout_5;
    QToolButton *Cut;
    QToolButton *Copy;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QToolButton *DataSet1;
    QToolButton *DataSet2;
    QToolButton *DataSet3;
    QToolButton *DataSet4;
    QToolButton *DataSet5;
    QToolButton *DataSetMerged;
    QLabel *DataSets;
    QFrame *line_4;

    void setupUi(QWidget *DVUIhomewidget)
    {
        if (DVUIhomewidget->objectName().isEmpty())
            DVUIhomewidget->setObjectName(QStringLiteral("DVUIhomewidget"));
        DVUIhomewidget->resize(1097, 122);
        horizontalLayout = new QHBoxLayout(DVUIhomewidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, -1, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(7);
        formLayout->setContentsMargins(0, -1, -1, -1);
        Layers = new QLabel(DVUIhomewidget);
        Layers->setObjectName(QStringLiteral("Layers"));
        Layers->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        Layers->setMargin(7);

        formLayout->setWidget(0, QFormLayout::LabelRole, Layers);

        LayersComboBox = new QComboBox(DVUIhomewidget);
        LayersComboBox->setObjectName(QStringLiteral("LayersComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, LayersComboBox);


        verticalLayout_6->addLayout(formLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        Layers_3 = new QToolButton(DVUIhomewidget);
        Layers_3->setObjectName(QStringLiteral("Layers_3"));
        Layers_3->setMinimumSize(QSize(20, 20));
        Layers_3->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/Layers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Layers_3->setIcon(icon);
        Layers_3->setIconSize(QSize(24, 24));
        Layers_3->setAutoRaise(true);

        horizontalLayout_4->addWidget(Layers_3);


        verticalLayout_6->addLayout(horizontalLayout_4);

        Layers_2 = new QLabel(DVUIhomewidget);
        Layers_2->setObjectName(QStringLiteral("Layers_2"));
        Layers_2->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        Layers_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(Layers_2);


        horizontalLayout->addLayout(verticalLayout_6);

        line = new QFrame(DVUIhomewidget);
        line->setObjectName(QStringLiteral("line"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(106, 106, 106, 255));
        gradient.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(106, 106, 106, 255));
        gradient1.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush3(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(106, 106, 106, 255));
        gradient2.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush4(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(106, 106, 106, 255));
        gradient3.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush6(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(106, 106, 106, 255));
        gradient4.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush7(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(106, 106, 106, 255));
        gradient5.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush8(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(106, 106, 106, 255));
        gradient6.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush9(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(106, 106, 106, 255));
        gradient7.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush10(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(106, 106, 106, 255));
        gradient8.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush11(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        line->setPalette(palette);
        line->setStyleSheet(QStringLiteral(""));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        Snaps = new QVBoxLayout();
        Snaps->setSpacing(0);
        Snaps->setObjectName(QStringLiteral("Snaps"));
        Snaps->setContentsMargins(-1, -1, -1, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        toolButton_9 = new QToolButton(DVUIhomewidget);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        toolButton_9->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_9->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_9, 1, 1, 1, 1);

        toolButton_10 = new QToolButton(DVUIhomewidget);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        toolButton_10->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_10->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_10, 1, 2, 1, 1);

        toolButton_11 = new QToolButton(DVUIhomewidget);
        toolButton_11->setObjectName(QStringLiteral("toolButton_11"));
        toolButton_11->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_11->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_11, 1, 3, 1, 1);

        toolButton_6 = new QToolButton(DVUIhomewidget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_6->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_6, 0, 2, 1, 1);

        toolButton_7 = new QToolButton(DVUIhomewidget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_7->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_7, 0, 3, 1, 1);

        toolButton_4 = new QToolButton(DVUIhomewidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_4->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_4, 0, 0, 1, 1);

        toolButton_5 = new QToolButton(DVUIhomewidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_5->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_5, 0, 1, 1, 1);

        toolButton_8 = new QToolButton(DVUIhomewidget);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        toolButton_8->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_8->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_8, 1, 0, 1, 1);

        toolButton_13 = new QToolButton(DVUIhomewidget);
        toolButton_13->setObjectName(QStringLiteral("toolButton_13"));
        toolButton_13->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_13->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_13, 0, 4, 1, 1);

        toolButton_12 = new QToolButton(DVUIhomewidget);
        toolButton_12->setObjectName(QStringLiteral("toolButton_12"));
        toolButton_12->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        toolButton_12->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_12, 1, 4, 1, 1);


        Snaps->addLayout(gridLayout_2);

        Snaps_2 = new QLabel(DVUIhomewidget);
        Snaps_2->setObjectName(QStringLiteral("Snaps_2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush12(QColor(0, 0, 0, 0));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush13(QColor(120, 120, 120, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        Snaps_2->setPalette(palette1);
        Snaps_2->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        Snaps_2->setAlignment(Qt::AlignCenter);

        Snaps->addWidget(Snaps_2);


        horizontalLayout->addLayout(Snaps);

        line_2 = new QFrame(DVUIhomewidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient9(0, 0, 0, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(106, 106, 106, 255));
        gradient9.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush14(gradient9);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient10(0, 0, 0, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(106, 106, 106, 255));
        gradient10.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush15(gradient10);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush15);
        QLinearGradient gradient11(0, 0, 0, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(106, 106, 106, 255));
        gradient11.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush16(gradient11);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient12(0, 0, 0, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(106, 106, 106, 255));
        gradient12.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush17(gradient12);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient13(0, 0, 0, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(106, 106, 106, 255));
        gradient13.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush18(gradient13);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        QLinearGradient gradient14(0, 0, 0, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(106, 106, 106, 255));
        gradient14.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush19(gradient14);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        QLinearGradient gradient15(0, 0, 0, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(106, 106, 106, 255));
        gradient15.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush20(gradient15);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        QLinearGradient gradient16(0, 0, 0, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(106, 106, 106, 255));
        gradient16.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush21(gradient16);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush21);
        QLinearGradient gradient17(0, 0, 0, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(106, 106, 106, 255));
        gradient17.setColorAt(1, QColor(79, 79, 82, 255));
        QBrush brush22(gradient17);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        line_2->setPalette(palette2);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        Paste = new QToolButton(DVUIhomewidget);
        Paste->setObjectName(QStringLiteral("Paste"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Paste->sizePolicy().hasHeightForWidth());
        Paste->setSizePolicy(sizePolicy);
        Paste->setMinimumSize(QSize(0, 0));
        Paste->setAutoFillBackground(false);
        Paste->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/Paste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Paste->setIcon(icon1);
        Paste->setIconSize(QSize(36, 36));
        Paste->setAutoRaise(true);

        horizontalLayout->addWidget(Paste);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Cut = new QToolButton(DVUIhomewidget);
        Cut->setObjectName(QStringLiteral("Cut"));
        Cut->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/Cut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Cut->setIcon(icon2);
        Cut->setIconSize(QSize(24, 24));
        Cut->setAutoRaise(true);

        verticalLayout_5->addWidget(Cut);

        Copy = new QToolButton(DVUIhomewidget);
        Copy->setObjectName(QStringLiteral("Copy"));
        Copy->setStyleSheet(QStringLiteral("background:color(0,0,0,0)"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../large icons/Copy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Copy->setIcon(icon3);
        Copy->setIconSize(QSize(24, 24));
        Copy->setAutoRaise(true);

        verticalLayout_5->addWidget(Copy);


        horizontalLayout->addLayout(verticalLayout_5);

        line_3 = new QFrame(DVUIhomewidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        line_3->setPalette(palette3);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        DataSet1 = new QToolButton(DVUIhomewidget);
        DataSet1->setObjectName(QStringLiteral("DataSet1"));
        DataSet1->setAutoRaise(true);

        gridLayout->addWidget(DataSet1, 0, 0, 1, 1);

        DataSet2 = new QToolButton(DVUIhomewidget);
        DataSet2->setObjectName(QStringLiteral("DataSet2"));
        DataSet2->setAutoRaise(true);

        gridLayout->addWidget(DataSet2, 0, 1, 1, 1);

        DataSet3 = new QToolButton(DVUIhomewidget);
        DataSet3->setObjectName(QStringLiteral("DataSet3"));
        DataSet3->setAutoRaise(true);

        gridLayout->addWidget(DataSet3, 0, 2, 1, 1);

        DataSet4 = new QToolButton(DVUIhomewidget);
        DataSet4->setObjectName(QStringLiteral("DataSet4"));
        DataSet4->setAutoRaise(true);

        gridLayout->addWidget(DataSet4, 1, 0, 1, 1);

        DataSet5 = new QToolButton(DVUIhomewidget);
        DataSet5->setObjectName(QStringLiteral("DataSet5"));
        DataSet5->setAutoRaise(true);

        gridLayout->addWidget(DataSet5, 1, 1, 1, 1);

        DataSetMerged = new QToolButton(DVUIhomewidget);
        DataSetMerged->setObjectName(QStringLiteral("DataSetMerged"));
        DataSetMerged->setAutoRaise(true);

        gridLayout->addWidget(DataSetMerged, 1, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        DataSets = new QLabel(DVUIhomewidget);
        DataSets->setObjectName(QStringLiteral("DataSets"));
        DataSets->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(DataSets);


        horizontalLayout->addLayout(verticalLayout_3);

        line_4 = new QFrame(DVUIhomewidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        line_4->setPalette(palette4);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);


        retranslateUi(DVUIhomewidget);

        QMetaObject::connectSlotsByName(DVUIhomewidget);
    } // setupUi

    void retranslateUi(QWidget *DVUIhomewidget)
    {
        DVUIhomewidget->setWindowTitle(QApplication::translate("DVUIhomewidget", "Form", nullptr));
        Layers->setText(QApplication::translate("DVUIhomewidget", "Layers:", nullptr));
        Layers_3->setText(QString());
        Layers_2->setText(QApplication::translate("DVUIhomewidget", "Layers", nullptr));
        toolButton_9->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        toolButton_10->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        toolButton_11->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        toolButton_6->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        toolButton_7->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        toolButton_4->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        toolButton_5->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        toolButton_8->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        toolButton_13->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        toolButton_12->setText(QApplication::translate("DVUIhomewidget", "...", nullptr));
        Snaps_2->setText(QApplication::translate("DVUIhomewidget", "Snaps", nullptr));
        Paste->setText(QString());
        Cut->setText(QString());
        Copy->setText(QString());
        DataSet1->setText(QApplication::translate("DVUIhomewidget", "1", nullptr));
        DataSet2->setText(QApplication::translate("DVUIhomewidget", "2", nullptr));
        DataSet3->setText(QApplication::translate("DVUIhomewidget", "3", nullptr));
        DataSet4->setText(QApplication::translate("DVUIhomewidget", "4", nullptr));
        DataSet5->setText(QApplication::translate("DVUIhomewidget", "5", nullptr));
        DataSetMerged->setText(QApplication::translate("DVUIhomewidget", "M", nullptr));
        DataSets->setText(QApplication::translate("DVUIhomewidget", "Data Sets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUIhomewidget: public Ui_DVUIhomewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DVUIHOMEWIDGET_H
