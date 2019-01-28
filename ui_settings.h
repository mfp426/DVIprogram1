/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

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

class Ui_DVUIsettings
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *MouseControls;
    QToolButton *UnitControls;
    QToolButton *DefaultMeasurements;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DVUIsettings)
    {
        if (DVUIsettings->objectName().isEmpty())
            DVUIsettings->setObjectName(QStringLiteral("DVUIsettings"));
        DVUIsettings->resize(1153, 80);
        horizontalLayout_2 = new QHBoxLayout(DVUIsettings);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MouseControls = new QToolButton(DVUIsettings);
        MouseControls->setObjectName(QStringLiteral("MouseControls"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/MouseControls.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MouseControls->setIcon(icon);
        MouseControls->setIconSize(QSize(32, 32));
        MouseControls->setAutoRaise(true);

        horizontalLayout->addWidget(MouseControls);

        UnitControls = new QToolButton(DVUIsettings);
        UnitControls->setObjectName(QStringLiteral("UnitControls"));
        UnitControls->setIconSize(QSize(32, 32));
        UnitControls->setAutoRaise(true);

        horizontalLayout->addWidget(UnitControls);

        DefaultMeasurements = new QToolButton(DVUIsettings);
        DefaultMeasurements->setObjectName(QStringLiteral("DefaultMeasurements"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/Ruler.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DefaultMeasurements->setIcon(icon1);
        DefaultMeasurements->setIconSize(QSize(32, 32));
        DefaultMeasurements->setAutoRaise(true);

        horizontalLayout->addWidget(DefaultMeasurements);

        toolButton = new QToolButton(DVUIsettings);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/PageSetup.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(DVUIsettings);

        QMetaObject::connectSlotsByName(DVUIsettings);
    } // setupUi

    void retranslateUi(QWidget *DVUIsettings)
    {
        DVUIsettings->setWindowTitle(QApplication::translate("DVUIsettings", "Settings", nullptr));
#ifndef QT_NO_TOOLTIP
        MouseControls->setToolTip(QApplication::translate("DVUIsettings", "Mouse Controls", nullptr));
#endif // QT_NO_TOOLTIP
        MouseControls->setText(QString());
#ifndef QT_NO_TOOLTIP
        UnitControls->setToolTip(QApplication::translate("DVUIsettings", "Unit Controls", nullptr));
#endif // QT_NO_TOOLTIP
        UnitControls->setText(QString());
#ifndef QT_NO_TOOLTIP
        DefaultMeasurements->setToolTip(QApplication::translate("DVUIsettings", "Default Measurements", nullptr));
#endif // QT_NO_TOOLTIP
        DefaultMeasurements->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("DVUIsettings", "Page Setup", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DVUIsettings: public Ui_DVUIsettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
