/********************************************************************************
** Form generated from reading UI file 'MergeDataFirstSet.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERGEDATAFIRSTSET_H
#define UI_MERGEDATAFIRSTSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVUIMergeDataFirstSet
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *BrowseLine;
    QPushButton *Browse;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *OKCancel;

    void setupUi(QWidget *DVUIMergeDataFirstSet)
    {
        if (DVUIMergeDataFirstSet->objectName().isEmpty())
            DVUIMergeDataFirstSet->setObjectName(QStringLiteral("DVUIMergeDataFirstSet"));
        DVUIMergeDataFirstSet->resize(474, 131);
        verticalLayout = new QVBoxLayout(DVUIMergeDataFirstSet);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DVUIMergeDataFirstSet);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BrowseLine = new QLineEdit(DVUIMergeDataFirstSet);
        BrowseLine->setObjectName(QStringLiteral("BrowseLine"));

        horizontalLayout->addWidget(BrowseLine);

        Browse = new QPushButton(DVUIMergeDataFirstSet);
        Browse->setObjectName(QStringLiteral("Browse"));
        QPalette palette;
        QBrush brush(QColor(79, 79, 82, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        Browse->setPalette(palette);

        horizontalLayout->addWidget(Browse);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        OKCancel = new QDialogButtonBox(DVUIMergeDataFirstSet);
        OKCancel->setObjectName(QStringLiteral("OKCancel"));
        OKCancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        OKCancel->setCenterButtons(true);

        verticalLayout->addWidget(OKCancel);


        retranslateUi(DVUIMergeDataFirstSet);

        QMetaObject::connectSlotsByName(DVUIMergeDataFirstSet);
    } // setupUi

    void retranslateUi(QWidget *DVUIMergeDataFirstSet)
    {
        DVUIMergeDataFirstSet->setWindowTitle(QApplication::translate("DVUIMergeDataFirstSet", "Widget", nullptr));
        label->setText(QApplication::translate("DVUIMergeDataFirstSet", "Select Fisrt Data Set", nullptr));
        Browse->setText(QApplication::translate("DVUIMergeDataFirstSet", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUIMergeDataFirstSet: public Ui_DVUIMergeDataFirstSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEDATAFIRSTSET_H
