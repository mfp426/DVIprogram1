#ifndef DVHLPTEXT_H
#define DVHLPTEXT_H
#include <Qwidget>
namespace Ui {
class DVUILPText;
}

class DVHLPText : public QWidget
{
    Q_OBJECT

public:
    explicit DVHLPText(QWidget *parent = 0);
    ~DVHLPText();
protected slots:
    void onColorButtonPressed();
private:
    Ui::DVUILPText *ui;
};
#endif // DVHLPTEXT_H
