#ifndef DVHSETTINGS_H
#define DVHSETTINGS_H
#include <Qwidget>
namespace Ui {
class DVUIsettings;
}

class DVHsettings : public QWidget
{
    Q_OBJECT

public:
    explicit DVHsettings(QWidget *parent = 0);
    ~DVHsettings();

private:
    Ui::DVUIsettings *ui;
};
#endif // DVHSETTINGS_H
