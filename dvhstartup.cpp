#include <QFileDialog>
#include "DVHstartup.h"
#include "ui_startupbox.h"
#include "mainwindow.h"
DVHstartup::DVHstartup() :
    QDialog(),
    ui(new Ui::StartupBox)
{
    ui->setupUi(this);
    connect(ui->Open,SIGNAL(clicked(bool)),this,SLOT(onOpen()));
    connect(ui->Close,SIGNAL(clicked(bool)),this,SLOT(onClose()));
}

DVHstartup::~DVHstartup()
{
    delete ui;
}
void DVHstartup::onClose()
{
   // QString fname = QFileDialog::getOpenFileName(this, tr("Put your dialog caption here"));
     // QFile openFile(fname); // you may check for fname.isEmpty before
      //openFile.open(QIODevice::ReadOnly); // you should do some error checking here!
    hide();
   // MainWindow* w = new MainWindow();
   // w->show();
}
void DVHstartup::onOpen()
{
   // QString fname = QFileDialog::getOpenFileName(this, tr("Put your dialog caption here"));
     // QFile openFile(fname); // you may check for fname.isEmpty before
      //openFile.open(QIODevice::ReadOnly); // you should do some error checking here!
    hide();
   // MainWindow* w = new MainWindow();
   // w->show();
}
void DVHstartup::onOpenFromCloud()
{

}
void DVHstartup::onImportData()
{

}
