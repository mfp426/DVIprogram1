#ifndef DVHCRASHTOOLS_H
#define DVHCRASHTOOLS_H
#include <Qwidget>
namespace Ui {
class DVUICrashTools;
}

class DVHCrashTools : public QWidget
{
    Q_OBJECT

public:
    explicit DVHCrashTools(QWidget *parent = 0);
    ~DVHCrashTools();

private:
    Ui::DVUICrashTools *ui;
};
#endif // DVHCRASHTOOLS_H
