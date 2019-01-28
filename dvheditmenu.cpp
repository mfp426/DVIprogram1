#include "DVHEditMenu.h"
#include "ui_EditMenu.h"

DVHEditMenu::DVHEditMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIEditMenu)
{
    ui->setupUi(this);
}

DVHEditMenu::~DVHEditMenu()
{
    delete ui;
}
