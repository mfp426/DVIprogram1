/********************************************************************************
** Form generated from reading UI file 'MergeDataAddSet.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERGEDATAADDSET_H
#define UI_MERGEDATAADDSET_H

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

class Ui_DVUIMergeDataAddSet
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *SelectAdditionalFile;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *Browse;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *OKCancel;

    void setupUi(QWidget *DVUIMergeDataAddSet)
    {
        if (DVUIMergeDataAddSet->objectName().isEmpty())
            DVUIMergeDataAddSet->setObjectName(QStringLiteral("DVUIMergeDataAddSet"));
        DVUIMergeDataAddSet->resize(445, 131);
        verticalLayout = new QVBoxLayout(DVUIMergeDataAddSet);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SelectAdditionalFile = new QLabel(DVUIMergeDataAddSet);
        SelectAdditionalFile->setObjectName(QStringLiteral("SelectAdditionalFile"));

        verticalLayout->addWidget(SelectAdditionalFile);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(DVUIMergeDataAddSet);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        Browse = new QPushButton(DVUIMergeDataAddSet);
        Browse->setObjectName(QStringLiteral("Browse"));

        horizontalLayout->addWidget(Browse);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        OKCancel = new QDialogButtonBox(DVUIMergeDataAddSet);
        OKCancel->setObjectName(QStringLiteral("OKCancel"));
        OKCancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        OKCancel->setCenterButtons(true);

        verticalLayout->addWidget(OKCancel);


        retranslateUi(DVUIMergeDataAddSet);

        QMetaObject::connectSlotsByName(DVUIMergeDataAddSet);
    } // setupUi

    void retranslateUi(QWidget *DVUIMergeDataAddSet)
    {
        DVUIMergeDataAddSet->setWindowTitle(QApplication::translate("DVUIMergeDataAddSet", "Widget", nullptr));
        SelectAdditionalFile->setText(QApplication::translate("DVUIMergeDataAddSet", "Select Additional Data Set", nullptr));
        Browse->setText(QApplication::translate("DVUIMergeDataAddSet", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUIMergeDataAddSet: public Ui_DVUIMergeDataAddSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEDATAADDSET_H
