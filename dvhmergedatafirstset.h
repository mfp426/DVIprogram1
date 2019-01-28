#ifndef DVHMERGEDATAFIRSTSET_H
#define DVHMERGEDATAFIRSTSET_H
#include <Qwidget>
namespace Ui {
class DVUIMergeDataFirstSet;
}

class DVHMergeDataFirstSet : public QWidget
{
    Q_OBJECT

public:
    explicit DVHMergeDataFirstSet(QWidget *parent = 0);
    ~DVHMergeDataFirstSet();

private:
    Ui::DVUIMergeDataFirstSet *ui;
};
#endif // DVHMERGEDATAFIRSTSET_H
