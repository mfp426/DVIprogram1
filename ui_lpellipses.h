/********************************************************************************
** Form generated from reading UI file 'lpellipses.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LPELLIPSES_H
#define UI_LPELLIPSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lpEllipses
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *PointData;
    QCheckBox *OrthoCheckBox;
    QLabel *Coordinates;
    QHBoxLayout *horizontalLayout;
    QCheckBox *AbsoluteCheckBox;
    QCheckBox *RelativeCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Xlabel;
    QLineEdit *XLineEdit;
    QLabel *Ylabel;
    QLineEdit *YLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Elevation;
    QLineEdit *ElevationLineEdit;
    QComboBox *ElevationComboBox;
    QFrame *line;
    QLabel *LineData;
    QPushButton *Color;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Layer;
    QComboBox *LayerComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Thickness;
    QLineEdit *ThicknessLineEdit;
    QComboBox *ThicknessComboBox;

    void setupUi(QWidget *lpEllipses)
    {
        if (lpEllipses->objectName().isEmpty())
            lpEllipses->setObjectName(QStringLiteral("lpEllipses"));
        lpEllipses->resize(400, 710);
        verticalLayout = new QVBoxLayout(lpEllipses);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PointData = new QLabel(lpEllipses);
        PointData->setObjectName(QStringLiteral("PointData"));
        QFont font;
        font.setUnderline(true);
        PointData->setFont(font);
        PointData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(PointData);

        OrthoCheckBox = new QCheckBox(lpEllipses);
        OrthoCheckBox->setObjectName(QStringLiteral("OrthoCheckBox"));

        verticalLayout->addWidget(OrthoCheckBox);

        Coordinates = new QLabel(lpEllipses);
        Coordinates->setObjectName(QStringLiteral("Coordinates"));

        verticalLayout->addWidget(Coordinates);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AbsoluteCheckBox = new QCheckBox(lpEllipses);
        AbsoluteCheckBox->setObjectName(QStringLiteral("AbsoluteCheckBox"));

        horizontalLayout->addWidget(AbsoluteCheckBox);

        RelativeCheckBox = new QCheckBox(lpEllipses);
        RelativeCheckBox->setObjectName(QStringLiteral("RelativeCheckBox"));

        horizontalLayout->addWidget(RelativeCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Xlabel = new QLabel(lpEllipses);
        Xlabel->setObjectName(QStringLiteral("Xlabel"));

        horizontalLayout_2->addWidget(Xlabel);

        XLineEdit = new QLineEdit(lpEllipses);
        XLineEdit->setObjectName(QStringLiteral("XLineEdit"));

        horizontalLayout_2->addWidget(XLineEdit);

        Ylabel = new QLabel(lpEllipses);
        Ylabel->setObjectName(QStringLiteral("Ylabel"));

        horizontalLayout_2->addWidget(Ylabel);

        YLineEdit = new QLineEdit(lpEllipses);
        YLineEdit->setObjectName(QStringLiteral("YLineEdit"));

        horizontalLayout_2->addWidget(YLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Elevation = new QLabel(lpEllipses);
        Elevation->setObjectName(QStringLiteral("Elevation"));

        horizontalLayout_3->addWidget(Elevation);

        ElevationLineEdit = new QLineEdit(lpEllipses);
        ElevationLineEdit->setObjectName(QStringLiteral("ElevationLineEdit"));

        horizontalLayout_3->addWidget(ElevationLineEdit);

        ElevationComboBox = new QComboBox(lpEllipses);
        ElevationComboBox->setObjectName(QStringLiteral("ElevationComboBox"));

        horizontalLayout_3->addWidget(ElevationComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(lpEllipses);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        LineData = new QLabel(lpEllipses);
        LineData->setObjectName(QStringLiteral("LineData"));
        LineData->setFont(font);
        LineData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LineData);

        Color = new QPushButton(lpEllipses);
        Color->setObjectName(QStringLiteral("Color"));

        verticalLayout->addWidget(Color);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Layer = new QLabel(lpEllipses);
        Layer->setObjectName(QStringLiteral("Layer"));

        horizontalLayout_4->addWidget(Layer);

        LayerComboBox = new QComboBox(lpEllipses);
        LayerComboBox->setObjectName(QStringLiteral("LayerComboBox"));

        horizontalLayout_4->addWidget(LayerComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Thickness = new QLabel(lpEllipses);
        Thickness->setObjectName(QStringLiteral("Thickness"));

        horizontalLayout_5->addWidget(Thickness);

        ThicknessLineEdit = new QLineEdit(lpEllipses);
        ThicknessLineEdit->setObjectName(QStringLiteral("ThicknessLineEdit"));

        horizontalLayout_5->addWidget(ThicknessLineEdit);

        ThicknessComboBox = new QComboBox(lpEllipses);
        ThicknessComboBox->setObjectName(QStringLiteral("ThicknessComboBox"));

        horizontalLayout_5->addWidget(ThicknessComboBox);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(lpEllipses);

        QMetaObject::connectSlotsByName(lpEllipses);
    } // setupUi

    void retranslateUi(QWidget *lpEllipses)
    {
        lpEllipses->setWindowTitle(QApplication::translate("lpEllipses", "Form", nullptr));
        PointData->setText(QApplication::translate("lpEllipses", "Point Data", nullptr));
        OrthoCheckBox->setText(QApplication::translate("lpEllipses", "Ortho", nullptr));
        Coordinates->setText(QApplication::translate("lpEllipses", "Coordinates", nullptr));
        AbsoluteCheckBox->setText(QApplication::translate("lpEllipses", "Absolute", nullptr));
        RelativeCheckBox->setText(QApplication::translate("lpEllipses", "Relative", nullptr));
        Xlabel->setText(QApplication::translate("lpEllipses", "x:", nullptr));
        Ylabel->setText(QApplication::translate("lpEllipses", "y:", nullptr));
        Elevation->setText(QApplication::translate("lpEllipses", "Elevation:", nullptr));
        LineData->setText(QApplication::translate("lpEllipses", "Line Data", nullptr));
        Color->setText(QApplication::translate("lpEllipses", "Color", nullptr));
        Layer->setText(QApplication::translate("lpEllipses", "Layer:", nullptr));
        Thickness->setText(QApplication::translate("lpEllipses", "Thickness:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lpEllipses: public Ui_lpEllipses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LPELLIPSES_H
