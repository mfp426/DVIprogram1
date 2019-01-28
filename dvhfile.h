#ifndef DVHFILE_H
#define DVHFILE_H
#include <Qwidget>
namespace Ui {
class DVUIfilemenu;
}

class DHVfilemenu : public QWidget
{
    Q_OBJECT

public:DHVfilemenu(QWidget *parent = 0);
    ~DHVfilemenu();

private:
    Ui::DVUIfilemenu *ui;
};
#endif // DHVFILE_H
