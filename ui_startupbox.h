/********************************************************************************
** Form generated from reading UI file 'startupbox.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUPBOX_H
#define UI_STARTUPBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StartupBox
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QToolButton *Close;
    QLabel *Logo;
    QHBoxLayout *horizontalLayout;
    QToolButton *Open;
    QToolButton *OpenFromCloud;
    QToolButton *ImportData;

    void setupUi(QDialog *StartupBox)
    {
        if (StartupBox->objectName().isEmpty())
            StartupBox->setObjectName(QStringLiteral("StartupBox"));
        StartupBox->resize(1046, 618);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        StartupBox->setPalette(palette);
        verticalLayout = new QVBoxLayout(StartupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        Close = new QToolButton(StartupBox);
        Close->setObjectName(QStringLiteral("Close"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        Close->setIcon(icon);
        Close->setAutoRaise(true);

        horizontalLayout_3->addWidget(Close);


        verticalLayout->addLayout(horizontalLayout_3);

        Logo = new QLabel(StartupBox);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("../large icons/Delta V logo.png")));
        Logo->setScaledContents(true);
        Logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Logo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Open = new QToolButton(StartupBox);
        Open->setObjectName(QStringLiteral("Open"));
        QFont font;
        font.setPointSize(11);
        Open->setFont(font);
        Open->setAutoRaise(true);

        horizontalLayout->addWidget(Open);

        OpenFromCloud = new QToolButton(StartupBox);
        OpenFromCloud->setObjectName(QStringLiteral("OpenFromCloud"));
        OpenFromCloud->setFont(font);
        OpenFromCloud->setAutoRaise(true);

        horizontalLayout->addWidget(OpenFromCloud);

        ImportData = new QToolButton(StartupBox);
        ImportData->setObjectName(QStringLiteral("ImportData"));
        ImportData->setFont(font);
        ImportData->setAutoRaise(true);

        horizontalLayout->addWidget(ImportData);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StartupBox);

        QMetaObject::connectSlotsByName(StartupBox);
    } // setupUi

    void retranslateUi(QDialog *StartupBox)
    {
        StartupBox->setWindowTitle(QApplication::translate("StartupBox", "StartupBox", nullptr));
        Close->setText(QString());
        Logo->setText(QString());
        Open->setText(QApplication::translate("StartupBox", "Open...", nullptr));
        OpenFromCloud->setText(QApplication::translate("StartupBox", "Open from Cloud...", nullptr));
        ImportData->setText(QApplication::translate("StartupBox", "Import Data...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartupBox: public Ui_StartupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUPBOX_H
