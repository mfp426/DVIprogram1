/********************************************************************************
** Form generated from reading UI file 'viewmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWMENU_H
#define UI_VIEWMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVUIViewMenu
{
public:
    QHBoxLayout *horizontalLayout_2;
    QToolButton *Redraw;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *ZoomIn;
    QToolButton *ZoomOut;
    QToolButton *ZoomExtent;
    QToolButton *ZoomPage;
    QToolButton *ZoomSelection;
    QFrame *line_2;
    QToolButton *Pan;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DVUIViewMenu)
    {
        if (DVUIViewMenu->objectName().isEmpty())
            DVUIViewMenu->setObjectName(QStringLiteral("DVUIViewMenu"));
        DVUIViewMenu->resize(1149, 88);
        horizontalLayout_2 = new QHBoxLayout(DVUIViewMenu);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        Redraw = new QToolButton(DVUIViewMenu);
        Redraw->setObjectName(QStringLiteral("Redraw"));
        QIcon icon;
        icon.addFile(QStringLiteral("../large icons/Redraw.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Redraw->setIcon(icon);
        Redraw->setIconSize(QSize(32, 32));
        Redraw->setAutoRaise(true);

        horizontalLayout_2->addWidget(Redraw);

        line = new QFrame(DVUIViewMenu);
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

        horizontalLayout_2->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        ZoomIn = new QToolButton(DVUIViewMenu);
        ZoomIn->setObjectName(QStringLiteral("ZoomIn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../large icons/ZoomIn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ZoomIn->setIcon(icon1);
        ZoomIn->setIconSize(QSize(32, 32));
        ZoomIn->setAutoRaise(true);

        horizontalLayout_4->addWidget(ZoomIn);

        ZoomOut = new QToolButton(DVUIViewMenu);
        ZoomOut->setObjectName(QStringLiteral("ZoomOut"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../large icons/ZoomOut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ZoomOut->setIcon(icon2);
        ZoomOut->setIconSize(QSize(32, 32));
        ZoomOut->setAutoRaise(true);

        horizontalLayout_4->addWidget(ZoomOut);

        ZoomExtent = new QToolButton(DVUIViewMenu);
        ZoomExtent->setObjectName(QStringLiteral("ZoomExtent"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../large icons/ZoomExtents.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ZoomExtent->setIcon(icon3);
        ZoomExtent->setIconSize(QSize(32, 32));
        ZoomExtent->setAutoRaise(true);

        horizontalLayout_4->addWidget(ZoomExtent);

        ZoomPage = new QToolButton(DVUIViewMenu);
        ZoomPage->setObjectName(QStringLiteral("ZoomPage"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../large icons/ZoomPage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ZoomPage->setIcon(icon4);
        ZoomPage->setIconSize(QSize(32, 32));
        ZoomPage->setAutoRaise(true);

        horizontalLayout_4->addWidget(ZoomPage);

        ZoomSelection = new QToolButton(DVUIViewMenu);
        ZoomSelection->setObjectName(QStringLiteral("ZoomSelection"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../large icons/ZoomSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ZoomSelection->setIcon(icon5);
        ZoomSelection->setIconSize(QSize(32, 32));
        ZoomSelection->setAutoRaise(true);

        horizontalLayout_4->addWidget(ZoomSelection);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        line_2 = new QFrame(DVUIViewMenu);
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

        horizontalLayout_2->addWidget(line_2);

        Pan = new QToolButton(DVUIViewMenu);
        Pan->setObjectName(QStringLiteral("Pan"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../large icons/pan.png"), QSize(), QIcon::Normal, QIcon::Off);
        Pan->setIcon(icon6);
        Pan->setIconSize(QSize(32, 32));
        Pan->setAutoRaise(true);

        horizontalLayout_2->addWidget(Pan);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(DVUIViewMenu);

        QMetaObject::connectSlotsByName(DVUIViewMenu);
    } // setupUi

    void retranslateUi(QWidget *DVUIViewMenu)
    {
        DVUIViewMenu->setWindowTitle(QApplication::translate("DVUIViewMenu", "ViewMenu", nullptr));
#ifndef QT_NO_TOOLTIP
        Redraw->setToolTip(QApplication::translate("DVUIViewMenu", "Redraw Ctrl + R", nullptr));
#endif // QT_NO_TOOLTIP
        Redraw->setText(QString());
#ifndef QT_NO_TOOLTIP
        ZoomIn->setToolTip(QApplication::translate("DVUIViewMenu", "Zoom In", nullptr));
#endif // QT_NO_TOOLTIP
        ZoomIn->setText(QString());
#ifndef QT_NO_TOOLTIP
        ZoomOut->setToolTip(QApplication::translate("DVUIViewMenu", "Zoom Out", nullptr));
#endif // QT_NO_TOOLTIP
        ZoomOut->setText(QString());
#ifndef QT_NO_TOOLTIP
        ZoomExtent->setToolTip(QApplication::translate("DVUIViewMenu", "Zoom Extents", nullptr));
#endif // QT_NO_TOOLTIP
        ZoomExtent->setText(QString());
#ifndef QT_NO_TOOLTIP
        ZoomPage->setToolTip(QApplication::translate("DVUIViewMenu", "Zoom Page", nullptr));
#endif // QT_NO_TOOLTIP
        ZoomPage->setText(QString());
#ifndef QT_NO_TOOLTIP
        ZoomSelection->setToolTip(QApplication::translate("DVUIViewMenu", "Zoom Select", nullptr));
#endif // QT_NO_TOOLTIP
        ZoomSelection->setText(QString());
#ifndef QT_NO_TOOLTIP
        Pan->setToolTip(QApplication::translate("DVUIViewMenu", "Pan", nullptr));
#endif // QT_NO_TOOLTIP
        Pan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DVUIViewMenu: public Ui_DVUIViewMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWMENU_H
