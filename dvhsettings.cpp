#include "DVHsettings.h"
#include "ui_settings.h"

DVHsettings::DVHsettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIsettings)
{
    ui->setupUi(this);
}

DVHsettings::~DVHsettings()
{
    delete ui;
}
