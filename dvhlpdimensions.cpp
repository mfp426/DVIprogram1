#include "DVHLPDimensions.h"
#include "ui_LPDimensions.h"
#include "QColorDialog"
void DVHLPDimensions::onColorButtonPressed()
{
    QColor color = QColorDialog::getColor(Qt::yellow, this );
}
DVHLPDimensions::DVHLPDimensions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUILPDimensions)
{
    ui->setupUi(this);
    connect(ui->ColorButton,SIGNAL(clicked(bool)),this,SLOT(onColorButtonPressed()));
}

DVHLPDimensions::~DVHLPDimensions()
{
    delete ui;
}
