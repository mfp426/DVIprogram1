#ifndef DVHRCBLANKSPACE_H
#define DVHRCBLANKSPACE_H
#include <Qwidget>
namespace Ui {
class DVUIRCBlankSpace;
}

class DVHRCBlankSpace : public QWidget
{
    Q_OBJECT

public:
    explicit DVHRCBlankSpace(QWidget *parent = 0);
    ~DVHRCBlankSpace();

private:
    Ui::DVUIRCBlankSpace *ui;
};
#endif // DVHRCBLANKSPACE_H
