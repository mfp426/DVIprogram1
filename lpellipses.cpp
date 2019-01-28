#include "lpellipses.h"
#include "ui_lpellipses.h"

lpEllipses::lpEllipses(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lpEllipses)
{
    ui->setupUi(this);
}

lpEllipses::~lpEllipses()
{
    delete ui;
}
