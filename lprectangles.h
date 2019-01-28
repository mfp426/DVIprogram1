#ifndef LPRECTANGLES_H
#define LPRECTANGLES_H

#include <QWidget>

namespace Ui {
class lpRectangles;
}

class lpRectangles : public QWidget
{
    Q_OBJECT

public:
    explicit lpRectangles(QWidget *parent = 0);
    ~lpRectangles();

private:
    Ui::lpRectangles *ui;
};

#endif // LPRECTANGLES_H
