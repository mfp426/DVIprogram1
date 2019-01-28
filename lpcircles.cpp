#include "lpcircles.h"
#include "ui_lpcircles.h"

lpcircles::lpcircles(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UilpCircles)
{
    ui->setupUi(this);
}

lpcircles::~lpcircles()
{
    delete ui;
}
