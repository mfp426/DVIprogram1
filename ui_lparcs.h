/********************************************************************************
** Form generated from reading UI file 'lparcs.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LPARCS_H
#define UI_LPARCS_H

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

class Ui_lparcs
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *PointData;
    QCheckBox *OrthoCheckBox;
    QLabel *Coordinates;
    QHBoxLayout *horizontalLayout;
    QCheckBox *RelativeCheckBox_2;
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
    QLabel *Radius;
    QLineEdit *RadiusLineEdit;
    QComboBox *RadiusComboBox;
    QFrame *line_2;
    QLabel *SymbolProperties;
    QPushButton *LineToSymbol;
    QHBoxLayout *horizontalLayout_8;
    QLabel *Height;
    QLineEdit *HeightLineEdit;
    QComboBox *HeightComboBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *Rotation;
    QLineEdit *RotationLineEdit;

    void setupUi(QWidget *lparcs)
    {
        if (lparcs->objectName().isEmpty())
            lparcs->setObjectName(QStringLiteral("lparcs"));
        lparcs->resize(400, 675);
        verticalLayout = new QVBoxLayout(lparcs);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PointData = new QLabel(lparcs);
        PointData->setObjectName(QStringLiteral("PointData"));
        QFont font;
        font.setUnderline(true);
        PointData->setFont(font);
        PointData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(PointData);

        OrthoCheckBox = new QCheckBox(lparcs);
        OrthoCheckBox->setObjectName(QStringLiteral("OrthoCheckBox"));

        verticalLayout->addWidget(OrthoCheckBox);

        Coordinates = new QLabel(lparcs);
        Coordinates->setObjectName(QStringLiteral("Coordinates"));
        Coordinates->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Coordinates);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        RelativeCheckBox_2 = new QCheckBox(lparcs);
        RelativeCheckBox_2->setObjectName(QStringLiteral("RelativeCheckBox_2"));

        horizontalLayout->addWidget(RelativeCheckBox_2);

        RelativeCheckBox = new QCheckBox(lparcs);
        RelativeCheckBox->setObjectName(QStringLiteral("RelativeCheckBox"));

        horizontalLayout->addWidget(RelativeCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        XLabel = new QLabel(lparcs);
        XLabel->setObjectName(QStringLiteral("XLabel"));

        horizontalLayout_2->addWidget(XLabel);

        XLineEdit = new QLineEdit(lparcs);
        XLineEdit->setObjectName(QStringLiteral("XLineEdit"));

        horizontalLayout_2->addWidget(XLineEdit);

        YLabel = new QLabel(lparcs);
        YLabel->setObjectName(QStringLiteral("YLabel"));

        horizontalLayout_2->addWidget(YLabel);

        YLineEdit = new QLineEdit(lparcs);
        YLineEdit->setObjectName(QStringLiteral("YLineEdit"));

        horizontalLayout_2->addWidget(YLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Elevation = new QLabel(lparcs);
        Elevation->setObjectName(QStringLiteral("Elevation"));

        horizontalLayout_3->addWidget(Elevation);

        ElevationLineEdit = new QLineEdit(lparcs);
        ElevationLineEdit->setObjectName(QStringLiteral("ElevationLineEdit"));

        horizontalLayout_3->addWidget(ElevationLineEdit);

        ElevationComboBox = new QComboBox(lparcs);
        ElevationComboBox->setObjectName(QStringLiteral("ElevationComboBox"));

        horizontalLayout_3->addWidget(ElevationComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(lparcs);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        LineData = new QLabel(lparcs);
        LineData->setObjectName(QStringLiteral("LineData"));
        LineData->setFont(font);
        LineData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LineData);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Layer = new QLabel(lparcs);
        Layer->setObjectName(QStringLiteral("Layer"));

        horizontalLayout_4->addWidget(Layer);

        LayerComboBox = new QComboBox(lparcs);
        LayerComboBox->setObjectName(QStringLiteral("LayerComboBox"));

        horizontalLayout_4->addWidget(LayerComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Thickness = new QLabel(lparcs);
        Thickness->setObjectName(QStringLiteral("Thickness"));

        horizontalLayout_5->addWidget(Thickness);

        ThicknessLineEdit = new QLineEdit(lparcs);
        ThicknessLineEdit->setObjectName(QStringLiteral("ThicknessLineEdit"));

        horizontalLayout_5->addWidget(ThicknessLineEdit);

        ThicknessComboBox = new QComboBox(lparcs);
        ThicknessComboBox->setObjectName(QStringLiteral("ThicknessComboBox"));

        horizontalLayout_5->addWidget(ThicknessComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Length = new QLabel(lparcs);
        Length->setObjectName(QStringLiteral("Length"));

        horizontalLayout_6->addWidget(Length);

        LengthLineEdit = new QLineEdit(lparcs);
        LengthLineEdit->setObjectName(QStringLiteral("LengthLineEdit"));

        horizontalLayout_6->addWidget(LengthLineEdit);

        LengthComboBox = new QComboBox(lparcs);
        LengthComboBox->setObjectName(QStringLiteral("LengthComboBox"));

        horizontalLayout_6->addWidget(LengthComboBox);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Radius = new QLabel(lparcs);
        Radius->setObjectName(QStringLiteral("Radius"));

        horizontalLayout_7->addWidget(Radius);

        RadiusLineEdit = new QLineEdit(lparcs);
        RadiusLineEdit->setObjectName(QStringLiteral("RadiusLineEdit"));

        horizontalLayout_7->addWidget(RadiusLineEdit);

        RadiusComboBox = new QComboBox(lparcs);
        RadiusComboBox->setObjectName(QStringLiteral("RadiusComboBox"));

        horizontalLayout_7->addWidget(RadiusComboBox);


        verticalLayout->addLayout(horizontalLayout_7);

        line_2 = new QFrame(lparcs);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        SymbolProperties = new QLabel(lparcs);
        SymbolProperties->setObjectName(QStringLiteral("SymbolProperties"));
        SymbolProperties->setFont(font);
        SymbolProperties->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(SymbolProperties);

        LineToSymbol = new QPushButton(lparcs);
        LineToSymbol->setObjectName(QStringLiteral("LineToSymbol"));

        verticalLayout->addWidget(LineToSymbol);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Height = new QLabel(lparcs);
        Height->setObjectName(QStringLiteral("Height"));

        horizontalLayout_8->addWidget(Height);

        HeightLineEdit = new QLineEdit(lparcs);
        HeightLineEdit->setObjectName(QStringLiteral("HeightLineEdit"));

        horizontalLayout_8->addWidget(HeightLineEdit);

        HeightComboBox = new QComboBox(lparcs);
        HeightComboBox->setObjectName(QStringLiteral("HeightComboBox"));

        horizontalLayout_8->addWidget(HeightComboBox);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        Rotation = new QLabel(lparcs);
        Rotation->setObjectName(QStringLiteral("Rotation"));

        horizontalLayout_9->addWidget(Rotation);

        RotationLineEdit = new QLineEdit(lparcs);
        RotationLineEdit->setObjectName(QStringLiteral("RotationLineEdit"));

        horizontalLayout_9->addWidget(RotationLineEdit);


        verticalLayout->addLayout(horizontalLayout_9);


        retranslateUi(lparcs);

        QMetaObject::connectSlotsByName(lparcs);
    } // setupUi

    void retranslateUi(QWidget *lparcs)
    {
        lparcs->setWindowTitle(QApplication::translate("lparcs", "Form", nullptr));
        PointData->setText(QApplication::translate("lparcs", "Ponit Data", nullptr));
        OrthoCheckBox->setText(QApplication::translate("lparcs", "Ortho", nullptr));
        Coordinates->setText(QApplication::translate("lparcs", "Coordinates", nullptr));
        RelativeCheckBox_2->setText(QApplication::translate("lparcs", "Absolute", nullptr));
        RelativeCheckBox->setText(QApplication::translate("lparcs", "CheckBox", nullptr));
        XLabel->setText(QApplication::translate("lparcs", "x:", nullptr));
        YLabel->setText(QApplication::translate("lparcs", "TextLabel", nullptr));
        Elevation->setText(QApplication::translate("lparcs", "Elevation:", nullptr));
        LineData->setText(QApplication::translate("lparcs", "Line Data", nullptr));
        Layer->setText(QApplication::translate("lparcs", "Layer:", nullptr));
        Thickness->setText(QApplication::translate("lparcs", "Thickness:", nullptr));
        Length->setText(QApplication::translate("lparcs", "Length:", nullptr));
        Radius->setText(QApplication::translate("lparcs", "Radius:", nullptr));
        SymbolProperties->setText(QApplication::translate("lparcs", "Symbol Properties", nullptr));
        LineToSymbol->setText(QApplication::translate("lparcs", "Line To Symbol", nullptr));
        Height->setText(QApplication::translate("lparcs", "Height:", nullptr));
        Rotation->setText(QApplication::translate("lparcs", "Rotation:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lparcs: public Ui_lparcs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LPARCS_H
