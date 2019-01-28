/********************************************************************************
** Form generated from reading UI file 'lppolygons.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LPPOLYGONS_H
#define UI_LPPOLYGONS_H

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

class Ui_lpPolygons
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *PointData;
    QCheckBox *OrthocheckBox;
    QLabel *Coordinates;
    QHBoxLayout *horizontalLayout;
    QCheckBox *AbsoluteCheckBox;
    QCheckBox *RelativeCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *XLabel;
    QLineEdit *XlineEdit;
    QLabel *YLabel;
    QLineEdit *YLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Elevation;
    QLineEdit *ElevationLineEdit;
    QComboBox *ElevationLomboBox;
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
    QLabel *NumberOfSides;
    QComboBox *NumberOfSidesComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *SideLength;
    QLineEdit *SideLengthLineEdit;
    QComboBox *SideLengthComboBox;

    void setupUi(QWidget *lpPolygons)
    {
        if (lpPolygons->objectName().isEmpty())
            lpPolygons->setObjectName(QStringLiteral("lpPolygons"));
        lpPolygons->resize(400, 715);
        verticalLayout = new QVBoxLayout(lpPolygons);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PointData = new QLabel(lpPolygons);
        PointData->setObjectName(QStringLiteral("PointData"));
        QFont font;
        font.setUnderline(true);
        PointData->setFont(font);
        PointData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(PointData);

        OrthocheckBox = new QCheckBox(lpPolygons);
        OrthocheckBox->setObjectName(QStringLiteral("OrthocheckBox"));

        verticalLayout->addWidget(OrthocheckBox);

        Coordinates = new QLabel(lpPolygons);
        Coordinates->setObjectName(QStringLiteral("Coordinates"));
        QFont font1;
        font1.setUnderline(false);
        Coordinates->setFont(font1);
        Coordinates->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Coordinates);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AbsoluteCheckBox = new QCheckBox(lpPolygons);
        AbsoluteCheckBox->setObjectName(QStringLiteral("AbsoluteCheckBox"));

        horizontalLayout->addWidget(AbsoluteCheckBox);

        RelativeCheckBox = new QCheckBox(lpPolygons);
        RelativeCheckBox->setObjectName(QStringLiteral("RelativeCheckBox"));

        horizontalLayout->addWidget(RelativeCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        XLabel = new QLabel(lpPolygons);
        XLabel->setObjectName(QStringLiteral("XLabel"));

        horizontalLayout_2->addWidget(XLabel);

        XlineEdit = new QLineEdit(lpPolygons);
        XlineEdit->setObjectName(QStringLiteral("XlineEdit"));

        horizontalLayout_2->addWidget(XlineEdit);

        YLabel = new QLabel(lpPolygons);
        YLabel->setObjectName(QStringLiteral("YLabel"));

        horizontalLayout_2->addWidget(YLabel);

        YLineEdit = new QLineEdit(lpPolygons);
        YLineEdit->setObjectName(QStringLiteral("YLineEdit"));

        horizontalLayout_2->addWidget(YLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Elevation = new QLabel(lpPolygons);
        Elevation->setObjectName(QStringLiteral("Elevation"));

        horizontalLayout_3->addWidget(Elevation);

        ElevationLineEdit = new QLineEdit(lpPolygons);
        ElevationLineEdit->setObjectName(QStringLiteral("ElevationLineEdit"));

        horizontalLayout_3->addWidget(ElevationLineEdit);

        ElevationLomboBox = new QComboBox(lpPolygons);
        ElevationLomboBox->setObjectName(QStringLiteral("ElevationLomboBox"));

        horizontalLayout_3->addWidget(ElevationLomboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(lpPolygons);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        LineData = new QLabel(lpPolygons);
        LineData->setObjectName(QStringLiteral("LineData"));
        LineData->setFont(font);
        LineData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LineData);

        Color = new QPushButton(lpPolygons);
        Color->setObjectName(QStringLiteral("Color"));

        verticalLayout->addWidget(Color);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Layer = new QLabel(lpPolygons);
        Layer->setObjectName(QStringLiteral("Layer"));

        horizontalLayout_4->addWidget(Layer);

        LayerComboBox = new QComboBox(lpPolygons);
        LayerComboBox->setObjectName(QStringLiteral("LayerComboBox"));

        horizontalLayout_4->addWidget(LayerComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Thickness = new QLabel(lpPolygons);
        Thickness->setObjectName(QStringLiteral("Thickness"));

        horizontalLayout_5->addWidget(Thickness);

        ThicknessLineEdit = new QLineEdit(lpPolygons);
        ThicknessLineEdit->setObjectName(QStringLiteral("ThicknessLineEdit"));

        horizontalLayout_5->addWidget(ThicknessLineEdit);

        ThicknessComboBox = new QComboBox(lpPolygons);
        ThicknessComboBox->setObjectName(QStringLiteral("ThicknessComboBox"));

        horizontalLayout_5->addWidget(ThicknessComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        NumberOfSides = new QLabel(lpPolygons);
        NumberOfSides->setObjectName(QStringLiteral("NumberOfSides"));

        horizontalLayout_6->addWidget(NumberOfSides);

        NumberOfSidesComboBox = new QComboBox(lpPolygons);
        NumberOfSidesComboBox->setObjectName(QStringLiteral("NumberOfSidesComboBox"));

        horizontalLayout_6->addWidget(NumberOfSidesComboBox);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        SideLength = new QLabel(lpPolygons);
        SideLength->setObjectName(QStringLiteral("SideLength"));

        horizontalLayout_7->addWidget(SideLength);

        SideLengthLineEdit = new QLineEdit(lpPolygons);
        SideLengthLineEdit->setObjectName(QStringLiteral("SideLengthLineEdit"));

        horizontalLayout_7->addWidget(SideLengthLineEdit);

        SideLengthComboBox = new QComboBox(lpPolygons);
        SideLengthComboBox->setObjectName(QStringLiteral("SideLengthComboBox"));

        horizontalLayout_7->addWidget(SideLengthComboBox);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(lpPolygons);

        QMetaObject::connectSlotsByName(lpPolygons);
    } // setupUi

    void retranslateUi(QWidget *lpPolygons)
    {
        lpPolygons->setWindowTitle(QApplication::translate("lpPolygons", "Form", nullptr));
        PointData->setText(QApplication::translate("lpPolygons", "Point Data", nullptr));
        OrthocheckBox->setText(QApplication::translate("lpPolygons", "Ortho", nullptr));
        Coordinates->setText(QApplication::translate("lpPolygons", "Coordinates", nullptr));
        AbsoluteCheckBox->setText(QApplication::translate("lpPolygons", "Absolute", nullptr));
        RelativeCheckBox->setText(QApplication::translate("lpPolygons", "Relative", nullptr));
        XLabel->setText(QApplication::translate("lpPolygons", "x:", nullptr));
        YLabel->setText(QApplication::translate("lpPolygons", "y:", nullptr));
        Elevation->setText(QApplication::translate("lpPolygons", "Elevation:", nullptr));
        LineData->setText(QApplication::translate("lpPolygons", "Line Data", nullptr));
        Color->setText(QApplication::translate("lpPolygons", "Color", nullptr));
        Layer->setText(QApplication::translate("lpPolygons", "Layer:", nullptr));
        Thickness->setText(QApplication::translate("lpPolygons", "Thickness:", nullptr));
        NumberOfSides->setText(QApplication::translate("lpPolygons", "Number of Sides", nullptr));
        SideLength->setText(QApplication::translate("lpPolygons", "Side Length:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lpPolygons: public Ui_lpPolygons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LPPOLYGONS_H
