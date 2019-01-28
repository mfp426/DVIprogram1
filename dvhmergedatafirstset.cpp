#include "DVHMergeDataFirstSet.h"
#include "ui_MergeDataFirstSet.h"

DVHMergeDataFirstSet::DVHMergeDataFirstSet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIMergeDataFirstSet)
{
    ui->setupUi(this);
}

DVHMergeDataFirstSet::~DVHMergeDataFirstSet()
{
    delete ui;
}
