#ifndef LPPOLYGONS_H
#define LPPOLYGONS_H

#include <QWidget>

namespace Ui {
class lpPolygons;
}

class lpPolygons : public QWidget
{
    Q_OBJECT

public:
    explicit lpPolygons(QWidget *parent = 0);
    ~lpPolygons();

private:
    Ui::lpPolygons *ui;
};

#endif // LPPOLYGONS_H
