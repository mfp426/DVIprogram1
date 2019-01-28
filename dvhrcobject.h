#ifndef DVHRCOBJECT_H
#define DVHRCOBJECT_H
#include <Qwidget>
namespace Ui {
class DVUIRCObject;
}

class DVHRCObject : public QWidget
{
    Q_OBJECT

public:
    explicit DVHRCObject(QWidget *parent = 0);
    ~DVHRCObject();

private:
    Ui::DVUIRCObject *ui;
};
#endif // DVHRCOBJECT_H
