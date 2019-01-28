#ifndef DVHHELP_H
#define DVHHELP_H
#include <Qwidget>
namespace Ui {
class DVUIHelp;
}

class DVHHelp : public QWidget
{
    Q_OBJECT

public:
    explicit DVHHelp(QWidget *parent = 0);
    ~DVHHelp();

private:
    Ui::DVUIHelp *ui;
};
#endif // DVHHELP_H
