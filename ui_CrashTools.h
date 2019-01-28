/********************************************************************************
** Form generated from reading UI file 'CrashTools.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRASHTOOLS_H
#define UI_CRASHTOOLS_H

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

class Ui_DVUICrashTools
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QToolButton *GenerateReport;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *SearchVehicleDatabase;
    QToolButton *ImportFromMobileApp;
    QToolButton *ImportCustomVehicle;
    QLabel *label;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QToolButton *toolButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DVUICrashTools)
    {
        if (DVUICrashTools->objectName().isEmpty())
            DVUICrashTools->setObjectName(QStringLiteral("DVUICrashTools"));
        DVUICrashTools->resize(1097, 87);
        horizontalLayout = new QHBoxLayout(DVUICrashTools);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        GenerateReport = new QToolButton(DVUICrashTools);
        GenerateReport->setObjectName(QStringLiteral("GenerateReport"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/Generate Report.png"), QSize(), QIcon::Normal, QIcon::Off);
        GenerateReport->setIcon(icon);
        GenerateReport->setIconSize(QSize(32, 32));
        GenerateReport->setAutoRaise(true);

        verticalLayout->addWidget(GenerateReport);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(DVUICrashTools);
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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        SearchVehicleDatabase = new QToolButton(DVUICrashTools);
        SearchVehicleDatabase->setObjectName(QStringLiteral("SearchVehicleDatabase"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/SearchVehicleDatabase.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SearchVehicleDatabase->setIcon(icon1);
        SearchVehicleDatabase->setIconSize(QSize(32, 32));
        SearchVehicleDatabase->setAutoRaise(true);

        horizontalLayout_2->addWidget(SearchVehicleDatabase);

        ImportFromMobileApp = new QToolButton(DVUICrashTools);
        ImportFromMobileApp->setObjectName(QStringLiteral("ImportFromMobileApp"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/mobile app icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ImportFromMobileApp->setIcon(icon2);
        ImportFromMobileApp->setIconSize(QSize(32, 32));
        ImportFromMobileApp->setAutoRaise(true);

        horizontalLayout_2->addWidget(ImportFromMobileApp);

        ImportCustomVehicle = new QToolButton(DVUICrashTools);
        ImportCustomVehicle->setObjectName(QStringLiteral("ImportCustomVehicle"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../large icons/import custom vehicle.png"), QSize(), QIcon::Normal, QIcon::Off);
        ImportCustomVehicle->setIcon(icon3);
        ImportCustomVehicle->setIconSize(QSize(32, 32));
        ImportCustomVehicle->setAutoRaise(true);

        horizontalLayout_2->addWidget(ImportCustomVehicle);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label = new QLabel(DVUICrashTools);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_2);

        line_2 = new QFrame(DVUICrashTools);
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
        toolButton = new QToolButton(DVUICrashTools);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../large icons/formulas.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon4);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setAutoRaise(true);

        verticalLayout_3->addWidget(toolButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(DVUICrashTools);

        QMetaObject::connectSlotsByName(DVUICrashTools);
    } // setupUi

    void retranslateUi(QWidget *DVUICrashTools)
    {
        DVUICrashTools->setWindowTitle(QApplication::translate("DVUICrashTools", "Widget", nullptr));
#ifndef QT_NO_TOOLTIP
        GenerateReport->setToolTip(QApplication::translate("DVUICrashTools", "Generate Report", nullptr));
#endif // QT_NO_TOOLTIP
        GenerateReport->setText(QString());
#ifndef QT_NO_TOOLTIP
        SearchVehicleDatabase->setToolTip(QApplication::translate("DVUICrashTools", "Search Vehicle Database", nullptr));
#endif // QT_NO_TOOLTIP
        SearchVehicleDatabase->setText(QString());
#ifndef QT_NO_TOOLTIP
        ImportFromMobileApp->setToolTip(QApplication::translate("DVUICrashTools", "Import from Mobile App", nullptr));
#endif // QT_NO_TOOLTIP
        ImportFromMobileApp->setText(QString());
#ifndef QT_NO_TOOLTIP
        ImportCustomVehicle->setToolTip(QApplication::translate("DVUICrashTools", "Import Custom Vehicle", nullptr));
#endif // QT_NO_TOOLTIP
        ImportCustomVehicle->setText(QString());
        label->setText(QApplication::translate("DVUICrashTools", "Import Vehicle Data", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("DVUICrashTools", "Formulas", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DVUICrashTools: public Ui_DVUICrashTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRASHTOOLS_H
