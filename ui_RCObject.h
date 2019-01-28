/********************************************************************************
** Form generated from reading UI file 'RCObject.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RCOBJECT_H
#define UI_RCOBJECT_H

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

class Ui_DVUIRCObject
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *exit;
    QToolButton *Copy;
    QToolButton *Paste;
    QToolButton *Delete;
    QToolButton *Scale;
    QToolButton *Rotate;
    QToolButton *Move;
    QToolButton *Properties;
    QToolButton *RubberStamp;
    QToolButton *DrawOrder;
    QPushButton *Cancel;

    void setupUi(QWidget *DVUIRCObject)
    {
        if (DVUIRCObject->objectName().isEmpty())
            DVUIRCObject->setObjectName(QStringLiteral("DVUIRCObject"));
        DVUIRCObject->resize(119, 346);
        verticalLayout = new QVBoxLayout(DVUIRCObject);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exit = new QToolButton(DVUIRCObject);
        exit->setObjectName(QStringLiteral("exit"));
        QIcon icon;
        icon.addFile(QStringLiteral("D:/Mike Business/Delta V/UX/icons/large icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon);
        exit->setAutoRaise(true);

        horizontalLayout->addWidget(exit);


        verticalLayout->addLayout(horizontalLayout);

        Copy = new QToolButton(DVUIRCObject);
        Copy->setObjectName(QStringLiteral("Copy"));
        Copy->setToolButtonStyle(Qt::ToolButtonTextOnly);
        Copy->setAutoRaise(true);

        verticalLayout->addWidget(Copy);

        Paste = new QToolButton(DVUIRCObject);
        Paste->setObjectName(QStringLiteral("Paste"));
        Paste->setToolButtonStyle(Qt::ToolButtonTextOnly);
        Paste->setAutoRaise(true);

        verticalLayout->addWidget(Paste);

        Delete = new QToolButton(DVUIRCObject);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setAutoRaise(true);

        verticalLayout->addWidget(Delete);

        Scale = new QToolButton(DVUIRCObject);
        Scale->setObjectName(QStringLiteral("Scale"));
        Scale->setToolButtonStyle(Qt::ToolButtonTextOnly);
        Scale->setAutoRaise(true);

        verticalLayout->addWidget(Scale);

        Rotate = new QToolButton(DVUIRCObject);
        Rotate->setObjectName(QStringLiteral("Rotate"));
        Rotate->setToolButtonStyle(Qt::ToolButtonTextOnly);
        Rotate->setAutoRaise(true);

        verticalLayout->addWidget(Rotate);

        Move = new QToolButton(DVUIRCObject);
        Move->setObjectName(QStringLiteral("Move"));
        Move->setToolButtonStyle(Qt::ToolButtonTextOnly);
        Move->setAutoRaise(true);

        verticalLayout->addWidget(Move);

        Properties = new QToolButton(DVUIRCObject);
        Properties->setObjectName(QStringLiteral("Properties"));
        Properties->setToolButtonStyle(Qt::ToolButtonTextOnly);
        Properties->setAutoRaise(true);

        verticalLayout->addWidget(Properties);

        RubberStamp = new QToolButton(DVUIRCObject);
        RubberStamp->setObjectName(QStringLiteral("RubberStamp"));
        RubberStamp->setToolButtonStyle(Qt::ToolButtonTextOnly);
        RubberStamp->setAutoRaise(true);

        verticalLayout->addWidget(RubberStamp);

        DrawOrder = new QToolButton(DVUIRCObject);
        DrawOrder->setObjectName(QStringLiteral("DrawOrder"));
        DrawOrder->setToolButtonStyle(Qt::ToolButtonTextOnly);
        DrawOrder->setAutoRaise(true);

        verticalLayout->addWidget(DrawOrder);

        Cancel = new QPushButton(DVUIRCObject);
        Cancel->setObjectName(QStringLiteral("Cancel"));

        verticalLayout->addWidget(Cancel);


        retranslateUi(DVUIRCObject);

        QMetaObject::connectSlotsByName(DVUIRCObject);
    } // setupUi

    void retranslateUi(QWidget *DVUIRCObject)
    {
        DVUIRCObject->setWindowTitle(QApplication::translate("DVUIRCObject", "Widget", nullptr));
        exit->setText(QString());
        Copy->setText(QApplication::translate("DVUIRCObject", "Copy", nullptr));
        Paste->setText(QApplication::translate("DVUIRCObject", "Paste", nullptr));
        Delete->setText(QApplication::translate("DVUIRCObject", "Dekete", nullptr));
        Scale->setText(QApplication::translate("DVUIRCObject", "Scale", nullptr));
        Rotate->setText(QApplication::translate("DVUIRCObject", "Rotate", nullptr));
        Move->setText(QApplication::translate("DVUIRCObject", "Move", nullptr));
        Properties->setText(QApplication::translate("DVUIRCObject", "Properties", nullptr));
        RubberStamp->setText(QApplication::translate("DVUIRCObject", "Rubber Stamp", nullptr));
        DrawOrder->setText(QApplication::translate("DVUIRCObject", "Draw Order", nullptr));
        Cancel->setText(QApplication::translate("DVUIRCObject", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVUIRCObject: public Ui_DVUIRCObject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RCOBJECT_H
