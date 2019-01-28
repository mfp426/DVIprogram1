/********************************************************************************
** Form generated from reading UI file 'LPText.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LPTEXT_H
#define UI_LPTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVUILPText
{
public:
    QVBoxLayout *verticalLayout_2;
    QFontComboBox *fontComboBox;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *FontSize;
    QPushButton *ColorButton;
    QGridLayout *gridLayout;
    QToolButton *Underline;
    QToolButton *Italic;
    QToolButton *LeftJustify;
    QToolButton *CenterJustify;
    QToolButton *toolButton_6;
    QToolButton *Bold;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *Angle;
    QSpinBox *spinBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *Spacing;
    QSpinBox *spinBox_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DVUILPText)
    {
        if (DVUILPText->objectName().isEmpty())
            DVUILPText->setObjectName(QStringLiteral("DVUILPText"));
        DVUILPText->resize(289, 672);
        verticalLayout_2 = new QVBoxLayout(DVUILPText);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        fontComboBox = new QFontComboBox(DVUILPText);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fontComboBox->setPalette(palette);

        verticalLayout_2->addWidget(fontComboBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        FontSize = new QComboBox(DVUILPText);
        FontSize->setObjectName(QStringLiteral("FontSize"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        FontSize->setPalette(palette1);

        horizontalLayout_3->addWidget(FontSize);

        ColorButton = new QPushButton(DVUILPText);
        ColorButton->setObjectName(QStringLiteral("ColorButton"));

        horizontalLayout_3->addWidget(ColorButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Underline = new QToolButton(DVUILPText);
        Underline->setObjectName(QStringLiteral("Underline"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/Underline.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Underline->setIcon(icon);
        Underline->setAutoRaise(true);

        gridLayout->addWidget(Underline, 0, 2, 1, 1);

        Italic = new QToolButton(DVUILPText);
        Italic->setObjectName(QStringLiteral("Italic"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/Italic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Italic->setIcon(icon1);
        Italic->setAutoRaise(true);

        gridLayout->addWidget(Italic, 0, 1, 1, 1);

        LeftJustify = new QToolButton(DVUILPText);
        LeftJustify->setObjectName(QStringLiteral("LeftJustify"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/TextAlignLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        LeftJustify->setIcon(icon2);
        LeftJustify->setAutoRaise(true);

        gridLayout->addWidget(LeftJustify, 1, 0, 1, 1);

        CenterJustify = new QToolButton(DVUILPText);
        CenterJustify->setObjectName(QStringLiteral("CenterJustify"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../large icons/TextAlignCenter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CenterJustify->setIcon(icon3);
        CenterJustify->setAutoRaise(true);

        gridLayout->addWidget(CenterJustify, 1, 1, 1, 1);

        toolButton_6 = new QToolButton(DVUILPText);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../large icons/TextAlignRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon4);
        toolButton_6->setAutoRaise(true);

        gridLayout->addWidget(toolButton_6, 1, 2, 1, 1);

        Bold = new QToolButton(DVUILPText);
        Bold->setObjectName(QStringLiteral("Bold"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../large icons/Bold.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Bold->setIcon(icon5);
        Bold->setAutoRaise(true);

        gridLayout->addWidget(Bold, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Angle = new QLabel(DVUILPText);
        Angle->setObjectName(QStringLiteral("Angle"));

        verticalLayout_3->addWidget(Angle);

        spinBox = new QSpinBox(DVUILPText);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout_3->addWidget(spinBox);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Spacing = new QLabel(DVUILPText);
        Spacing->setObjectName(QStringLiteral("Spacing"));

        verticalLayout_5->addWidget(Spacing);

        spinBox_2 = new QSpinBox(DVUILPText);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        verticalLayout_5->addWidget(spinBox_2);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(DVUILPText);

        QMetaObject::connectSlotsByName(DVUILPText);
    } // setupUi

    void retranslateUi(QWidget *DVUILPText)
    {
        DVUILPText->setWindowTitle(QApplication::translate("DVUILPText", "LeftToolBarText", nullptr));
        ColorButton->setText(QApplication::translate("DVUILPText", "Color", nullptr));
#ifndef QT_NO_TOOLTIP
        Underline->setToolTip(QApplication::translate("DVUILPText", "Underline Text", nullptr));
#endif // QT_NO_TOOLTIP
        Underline->setText(QString());
#ifndef QT_NO_TOOLTIP
        Italic->setToolTip(QApplication::translate("DVUILPText", "Italic Text", nullptr));
#endif // QT_NO_TOOLTIP
        Italic->setText(QString());
#ifndef QT_NO_TOOLTIP
        LeftJustify->setToolTip(QApplication::translate("DVUILPText", "Left Align Text", nullptr));
#endif // QT_NO_TOOLTIP
        LeftJustify->setText(QString());
#ifndef QT_NO_TOOLTIP
        CenterJustify->setToolTip(QApplication::translate("DVUILPText", "Center Align Text", nullptr));
#endif // QT_NO_TOOLTIP
        CenterJustify->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_6->setToolTip(QApplication::translate("DVUILPText", "Right Align Text", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        Bold->setToolTip(QApplication::translate("DVUILPText", "Bold Text", nullptr));
#endif // QT_NO_TOOLTIP
        Bold->setText(QString());
        Angle->setText(QApplication::translate("DVUILPText", "Angle", nullptr));
        Spacing->setText(QApplication::translate("DVUILPText", "Spacing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUILPText: public Ui_DVUILPText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LPTEXT_H
