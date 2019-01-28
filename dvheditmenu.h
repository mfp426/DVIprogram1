#ifndef DVHEDITMENU_H
#define DVHEDITMENU_H
#include <Qwidget>
namespace Ui {
class DVUIEditMenu;
}

class DVHEditMenu : public QWidget
{
    Q_OBJECT

public:
    explicit DVHEditMenu(QWidget *parent = 0);
    ~DVHEditMenu();

private:
    Ui::DVUIEditMenu *ui;
};
#endif // DVHEDITMENU_H
