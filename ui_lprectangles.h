/********************************************************************************
** Form generated from reading UI file 'lprectangles.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LPRECTANGLES_H
#define UI_LPRECTANGLES_H

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

class Ui_lpRectangles
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
    QLabel *XLabel;
    QLineEdit *XLineEdit;
    QLabel *YLabel;
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
    QLabel *Length;
    QLineEdit *LengthLineEdit;
    QComboBox *LengthComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *SideLength;
    QLineEdit *SideLengthLineEdit;
    QComboBox *SideLengthComboBox;

    void setupUi(QWidget *lpRectangles)
    {
        if (lpRectangles->objectName().isEmpty())
            lpRectangles->setObjectName(QStringLiteral("lpRectangles"));
        lpRectangles->resize(400, 703);
        verticalLayout = new QVBoxLayout(lpRectangles);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PointData = new QLabel(lpRectangles);
        PointData->setObjectName(QStringLiteral("PointData"));
        QFont font;
        font.setUnderline(true);
        PointData->setFont(font);
        PointData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(PointData);

        OrthoCheckBox = new QCheckBox(lpRectangles);
        OrthoCheckBox->setObjectName(QStringLiteral("OrthoCheckBox"));

        verticalLayout->addWidget(OrthoCheckBox);

        Coordinates = new QLabel(lpRectangles);
        Coordinates->setObjectName(QStringLiteral("Coordinates"));
        Coordinates->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Coordinates);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AbsoluteCheckBox = new QCheckBox(lpRectangles);
        AbsoluteCheckBox->setObjectName(QStringLiteral("AbsoluteCheckBox"));

        horizontalLayout->addWidget(AbsoluteCheckBox);

        RelativeCheckBox = new QCheckBox(lpRectangles);
        RelativeCheckBox->setObjectName(QStringLiteral("RelativeCheckBox"));

        horizontalLayout->addWidget(RelativeCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        XLabel = new QLabel(lpRectangles);
        XLabel->setObjectName(QStringLiteral("XLabel"));

        horizontalLayout_2->addWidget(XLabel);

        XLineEdit = new QLineEdit(lpRectangles);
        XLineEdit->setObjectName(QStringLiteral("XLineEdit"));

        horizontalLayout_2->addWidget(XLineEdit);

        YLabel = new QLabel(lpRectangles);
        YLabel->setObjectName(QStringLiteral("YLabel"));

        horizontalLayout_2->addWidget(YLabel);

        YLineEdit = new QLineEdit(lpRectangles);
        YLineEdit->setObjectName(QStringLiteral("YLineEdit"));

        horizontalLayout_2->addWidget(YLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Elevation = new QLabel(lpRectangles);
        Elevation->setObjectName(QStringLiteral("Elevation"));

        horizontalLayout_3->addWidget(Elevation);

        ElevationLineEdit = new QLineEdit(lpRectangles);
        ElevationLineEdit->setObjectName(QStringLiteral("ElevationLineEdit"));

        horizontalLayout_3->addWidget(ElevationLineEdit);

        ElevationComboBox = new QComboBox(lpRectangles);
        ElevationComboBox->setObjectName(QStringLiteral("ElevationComboBox"));

        horizontalLayout_3->addWidget(ElevationComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(lpRectangles);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        LineData = new QLabel(lpRectangles);
        LineData->setObjectName(QStringLiteral("LineData"));
        LineData->setFont(font);
        LineData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LineData);

        Color = new QPushButton(lpRectangles);
        Color->setObjectName(QStringLiteral("Color"));

        verticalLayout->addWidget(Color);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Layer = new QLabel(lpRectangles);
        Layer->setObjectName(QStringLiteral("Layer"));

        horizontalLayout_4->addWidget(Layer);

        LayerComboBox = new QComboBox(lpRectangles);
        LayerComboBox->setObjectName(QStringLiteral("LayerComboBox"));

        horizontalLayout_4->addWidget(LayerComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Thickness = new QLabel(lpRectangles);
        Thickness->setObjectName(QStringLiteral("Thickness"));

        horizontalLayout_5->addWidget(Thickness);

        ThicknessLineEdit = new QLineEdit(lpRectangles);
        ThicknessLineEdit->setObjectName(QStringLiteral("ThicknessLineEdit"));

        horizontalLayout_5->addWidget(ThicknessLineEdit);

        ThicknessComboBox = new QComboBox(lpRectangles);
        ThicknessComboBox->setObjectName(QStringLiteral("ThicknessComboBox"));

        horizontalLayout_5->addWidget(ThicknessComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Length = new QLabel(lpRectangles);
        Length->setObjectName(QStringLiteral("Length"));

        horizontalLayout_6->addWidget(Length);

        LengthLineEdit = new QLineEdit(lpRectangles);
        LengthLineEdit->setObjectName(QStringLiteral("LengthLineEdit"));

        horizontalLayout_6->addWidget(LengthLineEdit);

        LengthComboBox = new QComboBox(lpRectangles);
        LengthComboBox->setObjectName(QStringLiteral("LengthComboBox"));

        horizontalLayout_6->addWidget(LengthComboBox);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        SideLength = new QLabel(lpRectangles);
        SideLength->setObjectName(QStringLiteral("SideLength"));

        horizontalLayout_7->addWidget(SideLength);

        SideLengthLineEdit = new QLineEdit(lpRectangles);
        SideLengthLineEdit->setObjectName(QStringLiteral("SideLengthLineEdit"));

        horizontalLayout_7->addWidget(SideLengthLineEdit);

        SideLengthComboBox = new QComboBox(lpRectangles);
        SideLengthComboBox->setObjectName(QStringLiteral("SideLengthComboBox"));

        horizontalLayout_7->addWidget(SideLengthComboBox);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(lpRectangles);

        QMetaObject::connectSlotsByName(lpRectangles);
    } // setupUi

    void retranslateUi(QWidget *lpRectangles)
    {
        lpRectangles->setWindowTitle(QApplication::translate("lpRectangles", "Form", nullptr));
        PointData->setText(QApplication::translate("lpRectangles", "Pont Data", nullptr));
        OrthoCheckBox->setText(QApplication::translate("lpRectangles", "Ortho", nullptr));
        Coordinates->setText(QApplication::translate("lpRectangles", "Coordinates", nullptr));
        AbsoluteCheckBox->setText(QApplication::translate("lpRectangles", "Absolute", nullptr));
        RelativeCheckBox->setText(QApplication::translate("lpRectangles", "Relative", nullptr));
        XLabel->setText(QApplication::translate("lpRectangles", "x:", nullptr));
        YLabel->setText(QApplication::translate("lpRectangles", "y:", nullptr));
        Elevation->setText(QApplication::translate("lpRectangles", "Elevation:", nullptr));
        LineData->setText(QApplication::translate("lpRectangles", "Line Data", nullptr));
        Color->setText(QApplication::translate("lpRectangles", "Color", nullptr));
        Layer->setText(QApplication::translate("lpRectangles", "Layer:", nullptr));
        Thickness->setText(QApplication::translate("lpRectangles", "Tickness:", nullptr));
        Length->setText(QApplication::translate("lpRectangles", "Length:", nullptr));
        SideLength->setText(QApplication::translate("lpRectangles", "Side Length:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lpRectangles: public Ui_lpRectangles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LPRECTANGLES_H
