/********************************************************************************
** Form generated from reading UI file 'RCBlankSpace.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RCBLANKSPACE_H
#define UI_RCBLANKSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVUIRCBlankSpace
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *close;
    QToolButton *toolButton_2;
    QToolButton *Pan;
    QToolButton *ZoomExtents;
    QPushButton *pushButton;

    void setupUi(QWidget *DVUIRCBlankSpace)
    {
        if (DVUIRCBlankSpace->objectName().isEmpty())
            DVUIRCBlankSpace->setObjectName(QStringLiteral("DVUIRCBlankSpace"));
        DVUIRCBlankSpace->resize(127, 172);
        verticalLayout = new QVBoxLayout(DVUIRCBlankSpace);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QToolButton(DVUIRCBlankSpace);
        close->setObjectName(QStringLiteral("close"));
        QIcon icon;
        icon.addFile(QStringLiteral("D:/Mike Business/Delta V/UX/icons/large icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon);
        close->setAutoRaise(true);

        horizontalLayout->addWidget(close);


        verticalLayout->addLayout(horizontalLayout);

        toolButton_2 = new QToolButton(DVUIRCBlankSpace);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_2->setAutoRaise(true);

        verticalLayout->addWidget(toolButton_2);

        Pan = new QToolButton(DVUIRCBlankSpace);
        Pan->setObjectName(QStringLiteral("Pan"));
        Pan->setToolButtonStyle(Qt::ToolButtonTextOnly);
        Pan->setAutoRaise(true);

        verticalLayout->addWidget(Pan);

        ZoomExtents = new QToolButton(DVUIRCBlankSpace);
        ZoomExtents->setObjectName(QStringLiteral("ZoomExtents"));
        ZoomExtents->setToolButtonStyle(Qt::ToolButtonTextOnly);
        ZoomExtents->setAutoRaise(true);

        verticalLayout->addWidget(ZoomExtents);

        pushButton = new QPushButton(DVUIRCBlankSpace);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(79, 79, 82, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(118, 118, 123, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(98, 98, 102, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(39, 39, 41, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(52, 52, 54, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton->setPalette(palette);

        verticalLayout->addWidget(pushButton);


        retranslateUi(DVUIRCBlankSpace);

        QMetaObject::connectSlotsByName(DVUIRCBlankSpace);
    } // setupUi

    void retranslateUi(QWidget *DVUIRCBlankSpace)
    {
        DVUIRCBlankSpace->setWindowTitle(QApplication::translate("DVUIRCBlankSpace", "Widget", nullptr));
        close->setText(QString());
        toolButton_2->setText(QApplication::translate("DVUIRCBlankSpace", "Zoom Select", nullptr));
        Pan->setText(QApplication::translate("DVUIRCBlankSpace", "Pan", nullptr));
        ZoomExtents->setText(QApplication::translate("DVUIRCBlankSpace", "Zoom Extents", nullptr));
        pushButton->setText(QApplication::translate("DVUIRCBlankSpace", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUIRCBlankSpace: public Ui_DVUIRCBlankSpace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RCBLANKSPACE_H
