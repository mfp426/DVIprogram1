#include "DVHRCObject.h"
#include "ui_RCObject.h"

DVHRCObject::DVHRCObject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DVUIRCObject)
{
    ui->setupUi(this);
}

DVHRCObject::~DVHRCObject()
{
    delete ui;
}
