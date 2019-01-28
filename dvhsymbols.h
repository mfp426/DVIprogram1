#ifndef DVHSYMBOLS_H
#define DVHSYMBOLS_H
#include <Qwidget>
namespace Ui {
class DVUISymbols;
}

class DVHSymbols : public QWidget
{
    Q_OBJECT

public:
    explicit DVHSymbols(QWidget *parent = 0);
    ~DVHSymbols();

private:
    Ui::DVUISymbols *ui;
};
#endif // DVHSYMBOLS_H
