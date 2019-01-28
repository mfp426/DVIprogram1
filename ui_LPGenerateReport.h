/********************************************************************************
** Form generated from reading UI file 'LPGenerateReport.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LPGENERATEREPORT_H
#define UI_LPGENERATEREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LPGenerateReport
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *GenerateCoverPage;
    QFrame *line;
    QLabel *label;

    void setupUi(QWidget *LPGenerateReport)
    {
        if (LPGenerateReport->objectName().isEmpty())
            LPGenerateReport->setObjectName(QStringLiteral("LPGenerateReport"));
        LPGenerateReport->resize(232, 738);
        verticalLayout = new QVBoxLayout(LPGenerateReport);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        GenerateCoverPage = new QPushButton(LPGenerateReport);
        GenerateCoverPage->setObjectName(QStringLiteral("GenerateCoverPage"));
        QPalette palette;
        QBrush brush(QColor(79, 79, 82, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        GenerateCoverPage->setPalette(palette);
        GenerateCoverPage->setStyleSheet(QStringLiteral(""));
        GenerateCoverPage->setAutoDefault(false);
        GenerateCoverPage->setFlat(false);

        verticalLayout->addWidget(GenerateCoverPage);

        line = new QFrame(LPGenerateReport);
        line->setObjectName(QStringLiteral("line"));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush3(QColor(255, 255, 220, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        line->setPalette(palette1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label = new QLabel(LPGenerateReport);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);


        retranslateUi(LPGenerateReport);

        GenerateCoverPage->setDefault(false);


        QMetaObject::connectSlotsByName(LPGenerateReport);
    } // setupUi

    void retranslateUi(QWidget *LPGenerateReport)
    {
        LPGenerateReport->setWindowTitle(QApplication::translate("LPGenerateReport", "Widget", nullptr));
        GenerateCoverPage->setText(QApplication::translate("LPGenerateReport", "Gereate Cover Page", nullptr));
        label->setText(QApplication::translate("LPGenerateReport", "Create Custom Header/Footer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LPGenerateReport: public Ui_LPGenerateReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LPGENERATEREPORT_H
