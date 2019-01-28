#include "DVHDrawMenu.h"
#include "ui_DrawMenu.h"

DVHDrawMenu::DVHDrawMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIDrawMenu)
{
    ui->setupUi(this);
}

DVHDrawMenu::~DVHDrawMenu()
{
    delete ui;
}
