#include "DVHLPGenerateReport.h"
#include "ui_LPGenerateReport.h"

DVHLPGenerateReport::DVHLPGenerateReport(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LPGenerateReport)
{
    ui->setupUi(this);
}

DVHLPGenerateReport::~DVHLPGenerateReport()
{
    delete ui;
}
