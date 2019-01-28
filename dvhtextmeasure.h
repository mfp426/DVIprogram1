#ifndef DVHTEXTMEASURE_H
#define DVHTEXTMEASURE_H
#include <Qwidget>
namespace Ui {
class DVUITextMeasure;
}

class DVHTextMeasure : public QWidget
{
    Q_OBJECT

public:
    explicit DVHTextMeasure(QWidget *parent = 0);
    ~DVHTextMeasure();

private:
    Ui::DVUITextMeasure *ui;
};
#endif // DVHTEXTMEASURE_H
