#include "DVHhomewidget.h"
#include "ui_DVUIhomewidget.h"

DVHhomewidget::DVHhomewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIhomewidget)
{
    ui->setupUi(this);
}

DVHhomewidget::~DVHhomewidget()
{
    delete ui;
}
