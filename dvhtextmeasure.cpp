#include "DVHTextMeasure.h"
#include "ui_TextMeasure.h"

DVHTextMeasure::DVHTextMeasure(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUITextMeasure)
{
    ui->setupUi(this);

}

DVHTextMeasure::~DVHTextMeasure()
{
    delete ui;
}
