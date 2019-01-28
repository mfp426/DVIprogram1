/********************************************************************************
** Form generated from reading UI file 'Help.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

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

class Ui_DVUIHelp
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *Help;
    QToolButton *Registration;
    QToolButton *About;
    QToolButton *Credits;
    QToolButton *Partners;
    QToolButton *DeltaVwebsite;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DVUIHelp)
    {
        if (DVUIHelp->objectName().isEmpty())
            DVUIHelp->setObjectName(QStringLiteral("DVUIHelp"));
        DVUIHelp->resize(1094, 101);
        horizontalLayout = new QHBoxLayout(DVUIHelp);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        Help = new QToolButton(DVUIHelp);
        Help->setObjectName(QStringLiteral("Help"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setIcon(icon);
        Help->setIconSize(QSize(36, 36));
        Help->setAutoRaise(true);

        horizontalLayout->addWidget(Help);

        Registration = new QToolButton(DVUIHelp);
        Registration->setObjectName(QStringLiteral("Registration"));
        Registration->setAutoRaise(true);

        horizontalLayout->addWidget(Registration);

        About = new QToolButton(DVUIHelp);
        About->setObjectName(QStringLiteral("About"));
        About->setAutoRaise(true);

        horizontalLayout->addWidget(About);

        Credits = new QToolButton(DVUIHelp);
        Credits->setObjectName(QStringLiteral("Credits"));
        Credits->setAutoRaise(true);

        horizontalLayout->addWidget(Credits);

        Partners = new QToolButton(DVUIHelp);
        Partners->setObjectName(QStringLiteral("Partners"));
        Partners->setAutoRaise(true);

        horizontalLayout->addWidget(Partners);

        DeltaVwebsite = new QToolButton(DVUIHelp);
        DeltaVwebsite->setObjectName(QStringLiteral("DeltaVwebsite"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/Business Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeltaVwebsite->setIcon(icon1);
        DeltaVwebsite->setIconSize(QSize(64, 64));
        DeltaVwebsite->setAutoRaise(true);

        horizontalLayout->addWidget(DeltaVwebsite);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(DVUIHelp);

        QMetaObject::connectSlotsByName(DVUIHelp);
    } // setupUi

    void retranslateUi(QWidget *DVUIHelp)
    {
        DVUIHelp->setWindowTitle(QApplication::translate("DVUIHelp", "Widget", nullptr));
#ifndef QT_NO_TOOLTIP
        Help->setToolTip(QApplication::translate("DVUIHelp", "Help", nullptr));
#endif // QT_NO_TOOLTIP
        Help->setText(QString());
        Registration->setText(QApplication::translate("DVUIHelp", "Registration", nullptr));
        About->setText(QApplication::translate("DVUIHelp", "About", nullptr));
        Credits->setText(QApplication::translate("DVUIHelp", "Credits", nullptr));
        Partners->setText(QApplication::translate("DVUIHelp", "Partners", nullptr));
#ifndef QT_NO_TOOLTIP
        DeltaVwebsite->setToolTip(QApplication::translate("DVUIHelp", "Delta V Innovations Website", nullptr));
#endif // QT_NO_TOOLTIP
        DeltaVwebsite->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DVUIHelp: public Ui_DVUIHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
