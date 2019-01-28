#ifndef DVHVIEWMENU_H
#define DVHVIEWMENU_H
#include <Qwidget>
namespace Ui {
class DVUIViewMenu;
}

class DVHViewMenu : public QWidget
{
    Q_OBJECT

public:
    explicit DVHViewMenu(QWidget *parent = 0);
    ~DVHViewMenu();

private:
    Ui::DVUIViewMenu *ui;
};
#endif // DVHVIEWMENU_H
