#ifndef DVHMERGEDATAADDSET_H
#define DVHMERGEDATAADDSET_H
#include <Qwidget>
namespace Ui {
class DVUIMergeDataAddSet;
}

class DVHMergeDataAddSet : public QWidget
{
    Q_OBJECT

public:
    explicit DVHMergeDataAddSet(QWidget *parent = 0);
    ~DVHMergeDataAddSet();

private:
    Ui::DVUIMergeDataAddSet *ui;
};
#endif // DVHMERGEDATAADDSET_H
