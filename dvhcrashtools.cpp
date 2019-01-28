#include "DVHCrashTools.h"
#include "ui_CrashTools.h"

DVHCrashTools::DVHCrashTools(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUICrashTools)
{
    ui->setupUi(this);
}

DVHCrashTools::~DVHCrashTools()
{
    delete ui;
}
