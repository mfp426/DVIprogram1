/********************************************************************************
** Form generated from reading UI file 'lppoints.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LPPOINTS_H
#define UI_LPPOINTS_H

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

class Ui_lpPoints
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
    QFrame *line_2;
    QLabel *SymbolProperties;
    QPushButton *LineToSymbol;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Height;
    QLineEdit *HeightLineEdit;
    QComboBox *HeightComboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Rotation;
    QLineEdit *lineEdit;

    void setupUi(QWidget *lpPoints)
    {
        if (lpPoints->objectName().isEmpty())
            lpPoints->setObjectName(QStringLiteral("lpPoints"));
        lpPoints->resize(400, 701);
        verticalLayout = new QVBoxLayout(lpPoints);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PointData = new QLabel(lpPoints);
        PointData->setObjectName(QStringLiteral("PointData"));
        QFont font;
        font.setUnderline(true);
        PointData->setFont(font);
        PointData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(PointData);

        OrthoCheckBox = new QCheckBox(lpPoints);
        OrthoCheckBox->setObjectName(QStringLiteral("OrthoCheckBox"));

        verticalLayout->addWidget(OrthoCheckBox);

        Coordinates = new QLabel(lpPoints);
        Coordinates->setObjectName(QStringLiteral("Coordinates"));
        Coordinates->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Coordinates);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AbsoluteCheckBox = new QCheckBox(lpPoints);
        AbsoluteCheckBox->setObjectName(QStringLiteral("AbsoluteCheckBox"));

        horizontalLayout->addWidget(AbsoluteCheckBox);

        RelativeCheckBox = new QCheckBox(lpPoints);
        RelativeCheckBox->setObjectName(QStringLiteral("RelativeCheckBox"));

        horizontalLayout->addWidget(RelativeCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        XLabel = new QLabel(lpPoints);
        XLabel->setObjectName(QStringLiteral("XLabel"));

        horizontalLayout_2->addWidget(XLabel);

        XLineEdit = new QLineEdit(lpPoints);
        XLineEdit->setObjectName(QStringLiteral("XLineEdit"));

        horizontalLayout_2->addWidget(XLineEdit);

        YLabel = new QLabel(lpPoints);
        YLabel->setObjectName(QStringLiteral("YLabel"));

        horizontalLayout_2->addWidget(YLabel);

        YLineEdit = new QLineEdit(lpPoints);
        YLineEdit->setObjectName(QStringLiteral("YLineEdit"));

        horizontalLayout_2->addWidget(YLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Elevation = new QLabel(lpPoints);
        Elevation->setObjectName(QStringLiteral("Elevation"));

        horizontalLayout_3->addWidget(Elevation);

        ElevationLineEdit = new QLineEdit(lpPoints);
        ElevationLineEdit->setObjectName(QStringLiteral("ElevationLineEdit"));

        horizontalLayout_3->addWidget(ElevationLineEdit);

        ElevationComboBox = new QComboBox(lpPoints);
        ElevationComboBox->setObjectName(QStringLiteral("ElevationComboBox"));

        horizontalLayout_3->addWidget(ElevationComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(lpPoints);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        LineData = new QLabel(lpPoints);
        LineData->setObjectName(QStringLiteral("LineData"));
        LineData->setFont(font);
        LineData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LineData);

        Color = new QPushButton(lpPoints);
        Color->setObjectName(QStringLiteral("Color"));

        verticalLayout->addWidget(Color);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Layer = new QLabel(lpPoints);
        Layer->setObjectName(QStringLiteral("Layer"));

        horizontalLayout_4->addWidget(Layer);

        LayerComboBox = new QComboBox(lpPoints);
        LayerComboBox->setObjectName(QStringLiteral("LayerComboBox"));

        horizontalLayout_4->addWidget(LayerComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        line_2 = new QFrame(lpPoints);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        SymbolProperties = new QLabel(lpPoints);
        SymbolProperties->setObjectName(QStringLiteral("SymbolProperties"));
        SymbolProperties->setFont(font);
        SymbolProperties->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(SymbolProperties);

        LineToSymbol = new QPushButton(lpPoints);
        LineToSymbol->setObjectName(QStringLiteral("LineToSymbol"));

        verticalLayout->addWidget(LineToSymbol);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Height = new QLabel(lpPoints);
        Height->setObjectName(QStringLiteral("Height"));

        horizontalLayout_5->addWidget(Height);

        HeightLineEdit = new QLineEdit(lpPoints);
        HeightLineEdit->setObjectName(QStringLiteral("HeightLineEdit"));

        horizontalLayout_5->addWidget(HeightLineEdit);

        HeightComboBox = new QComboBox(lpPoints);
        HeightComboBox->setObjectName(QStringLiteral("HeightComboBox"));

        horizontalLayout_5->addWidget(HeightComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Rotation = new QLabel(lpPoints);
        Rotation->setObjectName(QStringLiteral("Rotation"));

        horizontalLayout_6->addWidget(Rotation);

        lineEdit = new QLineEdit(lpPoints);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_6->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(lpPoints);

        QMetaObject::connectSlotsByName(lpPoints);
    } // setupUi

    void retranslateUi(QWidget *lpPoints)
    {
        lpPoints->setWindowTitle(QApplication::translate("lpPoints", "Form", nullptr));
        PointData->setText(QApplication::translate("lpPoints", "Pont Data", nullptr));
        OrthoCheckBox->setText(QApplication::translate("lpPoints", "Ortho", nullptr));
        Coordinates->setText(QApplication::translate("lpPoints", "Coordinates", nullptr));
        AbsoluteCheckBox->setText(QApplication::translate("lpPoints", "Absolute", nullptr));
        RelativeCheckBox->setText(QApplication::translate("lpPoints", "Relative", nullptr));
        XLabel->setText(QApplication::translate("lpPoints", "x:", nullptr));
        YLabel->setText(QApplication::translate("lpPoints", "y:", nullptr));
        Elevation->setText(QApplication::translate("lpPoints", "Elevation:", nullptr));
        LineData->setText(QApplication::translate("lpPoints", "Line Data", nullptr));
        Color->setText(QApplication::translate("lpPoints", "Color", nullptr));
        Layer->setText(QApplication::translate("lpPoints", "Layer:", nullptr));
        SymbolProperties->setText(QApplication::translate("lpPoints", "Symbol Properties", nullptr));
        LineToSymbol->setText(QApplication::translate("lpPoints", "Line To Symbol", nullptr));
        Height->setText(QApplication::translate("lpPoints", "Height:", nullptr));
        Rotation->setText(QApplication::translate("lpPoints", "Rotation:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lpPoints: public Ui_lpPoints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LPPOINTS_H
