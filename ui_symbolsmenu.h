/********************************************************************************
** Form generated from reading UI file 'symbolsmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMBOLSMENU_H
#define UI_SYMBOLSMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVUISymbols
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *Vehicles;
    QToolButton *Motorcycles;
    QToolButton *CommercialMotorVehicles;
    QToolButton *EmergencyVehicles;
    QToolButton *Landscape;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DVUISymbols)
    {
        if (DVUISymbols->objectName().isEmpty())
            DVUISymbols->setObjectName(QStringLiteral("DVUISymbols"));
        DVUISymbols->resize(1154, 94);
        horizontalLayout_2 = new QHBoxLayout(DVUISymbols);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(16);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(7, -1, -1, -1);
        Vehicles = new QToolButton(DVUISymbols);
        Vehicles->setObjectName(QStringLiteral("Vehicles"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/vehicle.png"), QSize(), QIcon::Normal, QIcon::Off);
        Vehicles->setIcon(icon);
        Vehicles->setIconSize(QSize(64, 64));
        Vehicles->setAutoRaise(true);

        horizontalLayout->addWidget(Vehicles);

        Motorcycles = new QToolButton(DVUISymbols);
        Motorcycles->setObjectName(QStringLiteral("Motorcycles"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/motorcycle.png"), QSize(), QIcon::Normal, QIcon::Off);
        Motorcycles->setIcon(icon1);
        Motorcycles->setIconSize(QSize(64, 64));
        Motorcycles->setAutoRaise(true);

        horizontalLayout->addWidget(Motorcycles);

        CommercialMotorVehicles = new QToolButton(DVUISymbols);
        CommercialMotorVehicles->setObjectName(QStringLiteral("CommercialMotorVehicles"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/delivery-truck.png"), QSize(), QIcon::Normal, QIcon::Off);
        CommercialMotorVehicles->setIcon(icon2);
        CommercialMotorVehicles->setIconSize(QSize(64, 64));
        CommercialMotorVehicles->setAutoRaise(true);

        horizontalLayout->addWidget(CommercialMotorVehicles);

        EmergencyVehicles = new QToolButton(DVUISymbols);
        EmergencyVehicles->setObjectName(QStringLiteral("EmergencyVehicles"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../large icons/ambulance.png"), QSize(), QIcon::Normal, QIcon::Off);
        EmergencyVehicles->setIcon(icon3);
        EmergencyVehicles->setIconSize(QSize(64, 64));
        EmergencyVehicles->setAutoRaise(true);

        horizontalLayout->addWidget(EmergencyVehicles);

        Landscape = new QToolButton(DVUISymbols);
        Landscape->setObjectName(QStringLiteral("Landscape"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../large icons/landscape.png"), QSize(), QIcon::Normal, QIcon::Off);
        Landscape->setIcon(icon4);
        Landscape->setIconSize(QSize(64, 64));
        Landscape->setAutoRaise(true);

        horizontalLayout->addWidget(Landscape);

        toolButton = new QToolButton(DVUISymbols);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../large icons/traffic-lights.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon5);
        toolButton->setIconSize(QSize(64, 64));
        toolButton->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(DVUISymbols);

        QMetaObject::connectSlotsByName(DVUISymbols);
    } // setupUi

    void retranslateUi(QWidget *DVUISymbols)
    {
        DVUISymbols->setWindowTitle(QApplication::translate("DVUISymbols", "SybolsMenu", nullptr));
#ifndef QT_NO_TOOLTIP
        Vehicles->setToolTip(QApplication::translate("DVUISymbols", "Vehicles", nullptr));
#endif // QT_NO_TOOLTIP
        Vehicles->setText(QString());
#ifndef QT_NO_TOOLTIP
        Motorcycles->setToolTip(QApplication::translate("DVUISymbols", "Motorcycles", nullptr));
#endif // QT_NO_TOOLTIP
        Motorcycles->setText(QString());
#ifndef QT_NO_TOOLTIP
        CommercialMotorVehicles->setToolTip(QApplication::translate("DVUISymbols", "Commercial Motor Vehicles", nullptr));
#endif // QT_NO_TOOLTIP
        CommercialMotorVehicles->setText(QString());
#ifndef QT_NO_TOOLTIP
        EmergencyVehicles->setToolTip(QApplication::translate("DVUISymbols", "Emergency Vehicles", nullptr));
#endif // QT_NO_TOOLTIP
        EmergencyVehicles->setText(QString());
#ifndef QT_NO_TOOLTIP
        Landscape->setToolTip(QApplication::translate("DVUISymbols", "Landscape", nullptr));
#endif // QT_NO_TOOLTIP
        Landscape->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("DVUISymbols", "Lights/Signs", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DVUISymbols: public Ui_DVUISymbols {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMBOLSMENU_H
