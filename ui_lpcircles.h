/********************************************************************************
** Form generated from reading UI file 'lpcircles.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LPCIRCLES_H
#define UI_LPCIRCLES_H

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

class Ui_UilpCircles
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
    QHBoxLayout *horizontalLayout_6;
    QLabel *Radius;
    QLineEdit *lineEdit;
    QComboBox *RadiusComboBox;

    void setupUi(QWidget *UilpCircles)
    {
        if (UilpCircles->objectName().isEmpty())
            UilpCircles->setObjectName(QStringLiteral("UilpCircles"));
        UilpCircles->resize(400, 706);
        verticalLayout = new QVBoxLayout(UilpCircles);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PointData = new QLabel(UilpCircles);
        PointData->setObjectName(QStringLiteral("PointData"));
        QFont font;
        font.setUnderline(true);
        PointData->setFont(font);
        PointData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(PointData);

        OrthoCheckBox = new QCheckBox(UilpCircles);
        OrthoCheckBox->setObjectName(QStringLiteral("OrthoCheckBox"));

        verticalLayout->addWidget(OrthoCheckBox);

        Coordinates = new QLabel(UilpCircles);
        Coordinates->setObjectName(QStringLiteral("Coordinates"));
        Coordinates->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Coordinates);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AbsoluteCheckBox = new QCheckBox(UilpCircles);
        AbsoluteCheckBox->setObjectName(QStringLiteral("AbsoluteCheckBox"));

        horizontalLayout->addWidget(AbsoluteCheckBox);

        RelativeCheckBox = new QCheckBox(UilpCircles);
        RelativeCheckBox->setObjectName(QStringLiteral("RelativeCheckBox"));

        horizontalLayout->addWidget(RelativeCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Xlabel = new QLabel(UilpCircles);
        Xlabel->setObjectName(QStringLiteral("Xlabel"));

        horizontalLayout_2->addWidget(Xlabel);

        XLineEdit = new QLineEdit(UilpCircles);
        XLineEdit->setObjectName(QStringLiteral("XLineEdit"));

        horizontalLayout_2->addWidget(XLineEdit);

        Ylabel = new QLabel(UilpCircles);
        Ylabel->setObjectName(QStringLiteral("Ylabel"));

        horizontalLayout_2->addWidget(Ylabel);

        YLineEdit = new QLineEdit(UilpCircles);
        YLineEdit->setObjectName(QStringLiteral("YLineEdit"));

        horizontalLayout_2->addWidget(YLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Elevation = new QLabel(UilpCircles);
        Elevation->setObjectName(QStringLiteral("Elevation"));

        horizontalLayout_3->addWidget(Elevation);

        ElevationLineEdit = new QLineEdit(UilpCircles);
        ElevationLineEdit->setObjectName(QStringLiteral("ElevationLineEdit"));

        horizontalLayout_3->addWidget(ElevationLineEdit);

        ElevationComboBox = new QComboBox(UilpCircles);
        ElevationComboBox->setObjectName(QStringLiteral("ElevationComboBox"));

        horizontalLayout_3->addWidget(ElevationComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(UilpCircles);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        LineData = new QLabel(UilpCircles);
        LineData->setObjectName(QStringLiteral("LineData"));
        LineData->setFont(font);
        LineData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LineData);

        Color = new QPushButton(UilpCircles);
        Color->setObjectName(QStringLiteral("Color"));

        verticalLayout->addWidget(Color);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Layer = new QLabel(UilpCircles);
        Layer->setObjectName(QStringLiteral("Layer"));

        horizontalLayout_4->addWidget(Layer);

        LayerComboBox = new QComboBox(UilpCircles);
        LayerComboBox->setObjectName(QStringLiteral("LayerComboBox"));

        horizontalLayout_4->addWidget(LayerComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Thickness = new QLabel(UilpCircles);
        Thickness->setObjectName(QStringLiteral("Thickness"));

        horizontalLayout_5->addWidget(Thickness);

        ThicknessLineEdit = new QLineEdit(UilpCircles);
        ThicknessLineEdit->setObjectName(QStringLiteral("ThicknessLineEdit"));

        horizontalLayout_5->addWidget(ThicknessLineEdit);

        ThicknessComboBox = new QComboBox(UilpCircles);
        ThicknessComboBox->setObjectName(QStringLiteral("ThicknessComboBox"));

        horizontalLayout_5->addWidget(ThicknessComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Radius = new QLabel(UilpCircles);
        Radius->setObjectName(QStringLiteral("Radius"));

        horizontalLayout_6->addWidget(Radius);

        lineEdit = new QLineEdit(UilpCircles);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_6->addWidget(lineEdit);

        RadiusComboBox = new QComboBox(UilpCircles);
        RadiusComboBox->setObjectName(QStringLiteral("RadiusComboBox"));

        horizontalLayout_6->addWidget(RadiusComboBox);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(UilpCircles);

        QMetaObject::connectSlotsByName(UilpCircles);
    } // setupUi

    void retranslateUi(QWidget *UilpCircles)
    {
        UilpCircles->setWindowTitle(QApplication::translate("UilpCircles", "Form", nullptr));
        PointData->setText(QApplication::translate("UilpCircles", "Point Data", nullptr));
        OrthoCheckBox->setText(QApplication::translate("UilpCircles", "Ortho", nullptr));
        Coordinates->setText(QApplication::translate("UilpCircles", "Coordinates", nullptr));
        AbsoluteCheckBox->setText(QApplication::translate("UilpCircles", "Absolute", nullptr));
        RelativeCheckBox->setText(QApplication::translate("UilpCircles", "Relative", nullptr));
        Xlabel->setText(QApplication::translate("UilpCircles", "x:", nullptr));
        Ylabel->setText(QApplication::translate("UilpCircles", "y:", nullptr));
        Elevation->setText(QApplication::translate("UilpCircles", "Elevation:", nullptr));
        LineData->setText(QApplication::translate("UilpCircles", "Line Data", nullptr));
        Color->setText(QApplication::translate("UilpCircles", "Color", nullptr));
        Layer->setText(QApplication::translate("UilpCircles", "Layer:", nullptr));
        Thickness->setText(QApplication::translate("UilpCircles", "Thickness:", nullptr));
        Radius->setText(QApplication::translate("UilpCircles", "Radius:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UilpCircles: public Ui_UilpCircles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LPCIRCLES_H
