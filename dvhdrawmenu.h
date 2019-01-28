#ifndef DVHDRAWMENU_H
#define DVHDRAWMENU_H
#include <Qwidget>
namespace Ui {
class DVUIDrawMenu;
}

class DVHDrawMenu : public QWidget
{
    Q_OBJECT

public:
    explicit DVHDrawMenu(QWidget *parent = 0);
    ~DVHDrawMenu();

private:
    Ui::DVUIDrawMenu *ui;
};
#endif // DVHDRAWMENU_H
