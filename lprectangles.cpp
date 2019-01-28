#include "lprectangles.h"
#include "ui_lprectangles.h"

lpRectangles::lpRectangles(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lpRectangles)
{
    ui->setupUi(this);
}

lpRectangles::~lpRectangles()
{
    delete ui;
}
