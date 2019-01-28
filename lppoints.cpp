#include "lppoints.h"
#include "ui_lppoints.h"

lpPoints::lpPoints(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lpPoints)
{
    ui->setupUi(this);
}

lpPoints::~lpPoints()
{
    delete ui;
}
