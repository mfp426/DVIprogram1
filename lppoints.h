#ifndef LPPOINTS_H
#define LPPOINTS_H

#include <QWidget>

namespace Ui {
class lpPoints;
}

class lpPoints : public QWidget
{
    Q_OBJECT

public:
    explicit lpPoints(QWidget *parent = 0);
    ~lpPoints();

private:
    Ui::lpPoints *ui;
};

#endif // LPPOINTS_H
