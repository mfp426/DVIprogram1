#include "DVHSymbols.h"
#include "ui_SymbolsMenu.h"

DVHSymbols::DVHSymbols(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUISymbols)
{
    ui->setupUi(this);
}

DVHSymbols::~DVHSymbols()
{
    delete ui;
}
