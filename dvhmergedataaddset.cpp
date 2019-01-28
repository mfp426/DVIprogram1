#include "DVHMergeDataAddSet.h"
#include "ui_MergeDataAddSet.h"

DVHMergeDataAddSet::DVHMergeDataAddSet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIMergeDataAddSet)
{
    ui->setupUi(this);
}

DVHMergeDataAddSet::~DVHMergeDataAddSet()
{
    delete ui;
}
