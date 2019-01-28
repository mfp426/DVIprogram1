#include "DVHHelp.h"
#include "ui_Help.h"

DVHHelp::DVHHelp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIHelp)
{
    ui->setupUi(this);
}

DVHHelp::~DVHHelp()
{
    delete ui;
}
