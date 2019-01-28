#ifndef LPELLIPSES_H
#define LPELLIPSES_H

#include <QWidget>

namespace Ui {
class lpEllipses;
}

class lpEllipses : public QWidget
{
    Q_OBJECT

public:
    explicit lpEllipses(QWidget *parent = 0);
    ~lpEllipses();

private:
    Ui::lpEllipses *ui;
};

#endif // LPELLIPSES_H
