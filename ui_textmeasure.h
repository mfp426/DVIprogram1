/********************************************************************************
** Form generated from reading UI file 'textmeasure.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTMEASURE_H
#define UI_TEXTMEASURE_H

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

class Ui_DVUITextMeasure
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *InsertText;
    QToolButton *LeaderwithText;
    QLabel *Text;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *Distance;
    QToolButton *Angle;
    QToolButton *Area;
    QToolButton *Radius;
    QLabel *Measure;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *Horizontal;
    QToolButton *Vertical;
    QToolButton *Rotated;
    QToolButton *Aligned;
    QToolButton *Angular;
    QToolButton *toolButton;
    QToolButton *Diameter;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DVUITextMeasure)
    {
        if (DVUITextMeasure->objectName().isEmpty())
            DVUITextMeasure->setObjectName(QStringLiteral("DVUITextMeasure"));
        DVUITextMeasure->resize(1156, 92);
        horizontalLayout = new QHBoxLayout(DVUITextMeasure);
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
        InsertText = new QToolButton(DVUITextMeasure);
        InsertText->setObjectName(QStringLiteral("InsertText"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/Text.svg"), QSize(), QIcon::Normal, QIcon::Off);
        InsertText->setIcon(icon);
        InsertText->setIconSize(QSize(32, 32));
        InsertText->setAutoRaise(true);

        horizontalLayout_2->addWidget(InsertText);

        LeaderwithText = new QToolButton(DVUITextMeasure);
        LeaderwithText->setObjectName(QStringLiteral("LeaderwithText"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/LeaderWithText.svg"), QSize(), QIcon::Normal, QIcon::Off);
        LeaderwithText->setIcon(icon1);
        LeaderwithText->setIconSize(QSize(32, 32));
        LeaderwithText->setAutoRaise(true);

        horizontalLayout_2->addWidget(LeaderwithText);


        verticalLayout->addLayout(horizontalLayout_2);

        Text = new QLabel(DVUITextMeasure);
        Text->setObjectName(QStringLiteral("Text"));
        Text->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Text);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(DVUITextMeasure);
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
        Distance = new QToolButton(DVUITextMeasure);
        Distance->setObjectName(QStringLiteral("Distance"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/Measure2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Distance->setIcon(icon2);
        Distance->setIconSize(QSize(32, 32));
        Distance->setAutoRaise(true);

        horizontalLayout_3->addWidget(Distance);

        Angle = new QToolButton(DVUITextMeasure);
        Angle->setObjectName(QStringLiteral("Angle"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../large icons/Angle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Angle->setIcon(icon3);
        Angle->setIconSize(QSize(32, 32));
        Angle->setAutoRaise(true);

        horizontalLayout_3->addWidget(Angle);

        Area = new QToolButton(DVUITextMeasure);
        Area->setObjectName(QStringLiteral("Area"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../large icons/Area.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Area->setIcon(icon4);
        Area->setIconSize(QSize(32, 32));
        Area->setAutoRaise(true);

        horizontalLayout_3->addWidget(Area);

        Radius = new QToolButton(DVUITextMeasure);
        Radius->setObjectName(QStringLiteral("Radius"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../large icons/radius measure.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Radius->setIcon(icon5);
        Radius->setIconSize(QSize(32, 32));
        Radius->setAutoRaise(true);

        horizontalLayout_3->addWidget(Radius);


        verticalLayout_2->addLayout(horizontalLayout_3);

        Measure = new QLabel(DVUITextMeasure);
        Measure->setObjectName(QStringLiteral("Measure"));
        Measure->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Measure);


        horizontalLayout->addLayout(verticalLayout_2);

        line_2 = new QFrame(DVUITextMeasure);
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
        Horizontal = new QToolButton(DVUITextMeasure);
        Horizontal->setObjectName(QStringLiteral("Horizontal"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../large icons/HorizontalDimension.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Horizontal->setIcon(icon6);
        Horizontal->setIconSize(QSize(32, 32));
        Horizontal->setAutoRaise(true);

        horizontalLayout_4->addWidget(Horizontal);

        Vertical = new QToolButton(DVUITextMeasure);
        Vertical->setObjectName(QStringLiteral("Vertical"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../large icons/VerticalDimension.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Vertical->setIcon(icon7);
        Vertical->setIconSize(QSize(32, 32));
        Vertical->setAutoRaise(true);

        horizontalLayout_4->addWidget(Vertical);

        Rotated = new QToolButton(DVUITextMeasure);
        Rotated->setObjectName(QStringLiteral("Rotated"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../large icons/RotatedDimension.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Rotated->setIcon(icon8);
        Rotated->setIconSize(QSize(32, 32));
        Rotated->setAutoRaise(true);

        horizontalLayout_4->addWidget(Rotated);

        Aligned = new QToolButton(DVUITextMeasure);
        Aligned->setObjectName(QStringLiteral("Aligned"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../large icons/AlignedDimension.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Aligned->setIcon(icon9);
        Aligned->setIconSize(QSize(32, 32));
        Aligned->setAutoRaise(true);

        horizontalLayout_4->addWidget(Aligned);

        Angular = new QToolButton(DVUITextMeasure);
        Angular->setObjectName(QStringLiteral("Angular"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../large icons/Angular Dimension.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Angular->setIcon(icon10);
        Angular->setIconSize(QSize(32, 32));
        Angular->setAutoRaise(true);

        horizontalLayout_4->addWidget(Angular);

        toolButton = new QToolButton(DVUITextMeasure);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../large icons/radius dimension.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon11);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setAutoRaise(true);

        horizontalLayout_4->addWidget(toolButton);

        Diameter = new QToolButton(DVUITextMeasure);
        Diameter->setObjectName(QStringLiteral("Diameter"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../large icons/diameter dimension.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Diameter->setIcon(icon12);
        Diameter->setIconSize(QSize(32, 32));
        Diameter->setAutoRaise(true);

        horizontalLayout_4->addWidget(Diameter);


        verticalLayout_3->addLayout(horizontalLayout_4);

        label = new QLabel(DVUITextMeasure);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(DVUITextMeasure);

        QMetaObject::connectSlotsByName(DVUITextMeasure);
    } // setupUi

    void retranslateUi(QWidget *DVUITextMeasure)
    {
        DVUITextMeasure->setWindowTitle(QApplication::translate("DVUITextMeasure", "TextMeasure", nullptr));
#ifndef QT_NO_TOOLTIP
        InsertText->setToolTip(QApplication::translate("DVUITextMeasure", "Insert Text", nullptr));
#endif // QT_NO_TOOLTIP
        InsertText->setText(QString());
#ifndef QT_NO_TOOLTIP
        LeaderwithText->setToolTip(QApplication::translate("DVUITextMeasure", "Leader with Text", nullptr));
#endif // QT_NO_TOOLTIP
        LeaderwithText->setText(QString());
        Text->setText(QApplication::translate("DVUITextMeasure", "Text", nullptr));
#ifndef QT_NO_TOOLTIP
        Distance->setToolTip(QApplication::translate("DVUITextMeasure", "Distance", nullptr));
#endif // QT_NO_TOOLTIP
        Distance->setText(QString());
#ifndef QT_NO_TOOLTIP
        Angle->setToolTip(QApplication::translate("DVUITextMeasure", "Angle", nullptr));
#endif // QT_NO_TOOLTIP
        Angle->setText(QString());
#ifndef QT_NO_TOOLTIP
        Area->setToolTip(QApplication::translate("DVUITextMeasure", "Area", nullptr));
#endif // QT_NO_TOOLTIP
        Area->setText(QString());
#ifndef QT_NO_TOOLTIP
        Radius->setToolTip(QApplication::translate("DVUITextMeasure", "Radius", nullptr));
#endif // QT_NO_TOOLTIP
        Radius->setText(QString());
        Measure->setText(QApplication::translate("DVUITextMeasure", "Measure", nullptr));
#ifndef QT_NO_TOOLTIP
        Horizontal->setToolTip(QApplication::translate("DVUITextMeasure", "Horizontal Dimension", nullptr));
#endif // QT_NO_TOOLTIP
        Horizontal->setText(QString());
#ifndef QT_NO_TOOLTIP
        Vertical->setToolTip(QApplication::translate("DVUITextMeasure", "Vertical Dimension", nullptr));
#endif // QT_NO_TOOLTIP
        Vertical->setText(QString());
#ifndef QT_NO_TOOLTIP
        Rotated->setToolTip(QApplication::translate("DVUITextMeasure", "Rotated Dimension", nullptr));
#endif // QT_NO_TOOLTIP
        Rotated->setText(QString());
#ifndef QT_NO_TOOLTIP
        Aligned->setToolTip(QApplication::translate("DVUITextMeasure", "Aligned Dimension", nullptr));
#endif // QT_NO_TOOLTIP
        Aligned->setText(QString());
#ifndef QT_NO_TOOLTIP
        Angular->setToolTip(QApplication::translate("DVUITextMeasure", "Angular Dimension", nullptr));
#endif // QT_NO_TOOLTIP
        Angular->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("DVUITextMeasure", "Radius Dimension", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        Diameter->setToolTip(QApplication::translate("DVUITextMeasure", "Diameter Dimension", nullptr));
#endif // QT_NO_TOOLTIP
        Diameter->setText(QString());
        label->setText(QApplication::translate("DVUITextMeasure", "Dimensions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUITextMeasure: public Ui_DVUITextMeasure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTMEASURE_H
