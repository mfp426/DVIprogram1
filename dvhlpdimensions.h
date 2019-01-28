#ifndef DVHLPDIMENSIONS_H
#define DVHLPDIMENSIONS_H
#include <Qwidget>
namespace Ui {
class DVUILPDimensions;
}

class DVHLPDimensions : public QWidget
{
    Q_OBJECT

public:
    explicit DVHLPDimensions(QWidget *parent = 0);
    ~DVHLPDimensions();
protected slots:
    void onColorButtonPressed();
private:
    Ui::DVUILPDimensions *ui;
};
#endif // DVHLPDimensions_H


