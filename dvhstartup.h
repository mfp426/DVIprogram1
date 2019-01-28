#ifndef DVHSTARTUP_H
#define DVHSTARTUP_H
#include <QDialog>
namespace Ui {
class StartupBox;
}

class DVHstartup : public QDialog
{
    Q_OBJECT

public:
    explicit DVHstartup();
    ~DVHstartup();
protected slots:
    void onOpen();
    void onOpenFromCloud();
    void onImportData();
    void onClose();
private:
    Ui::StartupBox *ui;
};
#endif // DVHSTARTUP_H
