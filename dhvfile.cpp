#include "DVHfile.h"
#include "ui_filemenu.h"

DHVfilemenu::DHVfilemenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIfilemenu)
{
    ui->setupUi(this);
}
DHVfilemenu::~DHVfilemenu()
{
    delete ui;
}
