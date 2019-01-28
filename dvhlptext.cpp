#include "DVHLPText.h"
#include "ui_LPText.h"
#include "QColorDialog"
void DVHLPText::onColorButtonPressed()
{
    QColor color = QColorDialog::getColor(Qt::yellow, this );
}
DVHLPText::DVHLPText(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUILPText)
{
    ui->setupUi(this);
    connect(ui->ColorButton,SIGNAL(clicked(bool)),this,SLOT(onColorButtonPressed()));
}

DVHLPText::~DVHLPText()
{
    delete ui;
}
