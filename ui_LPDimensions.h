/********************************************************************************
** Form generated from reading UI file 'LPDimensions.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LPDIMENSIONS_H
#define UI_LPDIMENSIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVUILPDimensions
{
public:
    QVBoxLayout *verticalLayout;
    QFontComboBox *fontComboBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *Fontsize;
    QPushButton *ColorButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *TextAlignment;
    QComboBox *TextAlignment_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *DecimalPlace;
    QComboBox *comboBox_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Arrows;
    QComboBox *Arrows_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Leader;
    QComboBox *comboBox_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Angle;
    QComboBox *comboBox_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DVUILPDimensions)
    {
        if (DVUILPDimensions->objectName().isEmpty())
            DVUILPDimensions->setObjectName(QStringLiteral("DVUILPDimensions"));
        DVUILPDimensions->resize(248, 669);
        verticalLayout = new QVBoxLayout(DVUILPDimensions);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fontComboBox = new QFontComboBox(DVUILPDimensions);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        verticalLayout->addWidget(fontComboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Fontsize = new QComboBox(DVUILPDimensions);
        Fontsize->setObjectName(QStringLiteral("Fontsize"));

        horizontalLayout->addWidget(Fontsize);

        ColorButton = new QPushButton(DVUILPDimensions);
        ColorButton->setObjectName(QStringLiteral("ColorButton"));

        horizontalLayout->addWidget(ColorButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        TextAlignment = new QLabel(DVUILPDimensions);
        TextAlignment->setObjectName(QStringLiteral("TextAlignment"));

        horizontalLayout_2->addWidget(TextAlignment);

        TextAlignment_2 = new QComboBox(DVUILPDimensions);
        TextAlignment_2->setObjectName(QStringLiteral("TextAlignment_2"));

        horizontalLayout_2->addWidget(TextAlignment_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        DecimalPlace = new QLabel(DVUILPDimensions);
        DecimalPlace->setObjectName(QStringLiteral("DecimalPlace"));

        horizontalLayout_3->addWidget(DecimalPlace);

        comboBox_3 = new QComboBox(DVUILPDimensions);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(DVUILPDimensions);
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
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Arrows = new QLabel(DVUILPDimensions);
        Arrows->setObjectName(QStringLiteral("Arrows"));

        horizontalLayout_4->addWidget(Arrows);

        Arrows_2 = new QComboBox(DVUILPDimensions);
        Arrows_2->setObjectName(QStringLiteral("Arrows_2"));

        horizontalLayout_4->addWidget(Arrows_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Leader = new QLabel(DVUILPDimensions);
        Leader->setObjectName(QStringLiteral("Leader"));

        horizontalLayout_5->addWidget(Leader);

        comboBox_5 = new QComboBox(DVUILPDimensions);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        horizontalLayout_5->addWidget(comboBox_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Angle = new QLabel(DVUILPDimensions);
        Angle->setObjectName(QStringLiteral("Angle"));

        horizontalLayout_6->addWidget(Angle);

        comboBox_6 = new QComboBox(DVUILPDimensions);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        horizontalLayout_6->addWidget(comboBox_6);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(DVUILPDimensions);

        QMetaObject::connectSlotsByName(DVUILPDimensions);
    } // setupUi

    void retranslateUi(QWidget *DVUILPDimensions)
    {
        DVUILPDimensions->setWindowTitle(QApplication::translate("DVUILPDimensions", "LeftToolBarDimensions", nullptr));
        ColorButton->setText(QApplication::translate("DVUILPDimensions", "Color", nullptr));
        TextAlignment->setText(QApplication::translate("DVUILPDimensions", "Text Alignment", nullptr));
        DecimalPlace->setText(QApplication::translate("DVUILPDimensions", "Decimal Places", nullptr));
        Arrows->setText(QApplication::translate("DVUILPDimensions", "Arrows", nullptr));
        Leader->setText(QApplication::translate("DVUILPDimensions", "Leader", nullptr));
        Angle->setText(QApplication::translate("DVUILPDimensions", "Angle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUILPDimensions: public Ui_DVUILPDimensions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LPDIMENSIONS_H
