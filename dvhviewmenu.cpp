#include "DVHViewMenu.h"
#include "ui_ViewMenu.h"

DVHViewMenu::DVHViewMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIViewMenu)
{
    ui->setupUi(this);
}

DVHViewMenu::~DVHViewMenu()
{
    delete ui;
}
