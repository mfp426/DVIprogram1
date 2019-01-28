#include "lppolygons.h"
#include "ui_lppolygons.h"

lpPolygons::lpPolygons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lpPolygons)
{
    ui->setupUi(this);
}

lpPolygons::~lpPolygons()
{
    delete ui;
}
