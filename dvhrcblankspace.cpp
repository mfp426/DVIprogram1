#include "DVHRCBlankSpace.h"
#include "ui_RCBlankSpace.h"

DVHRCBlankSpace::DVHRCBlankSpace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIRCBlankSpace)
{
    ui->setupUi(this);
}

DVHRCBlankSpace::~DVHRCBlankSpace()
{
    delete ui;
}
