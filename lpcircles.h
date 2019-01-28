#ifndef LPCIRCLES_H
#define LPCIRCLES_H

#include <QWidget>

namespace Ui {
class UilpCircles;
}

class lpcircles : public QWidget
{
    Q_OBJECT

public:
    explicit lpcircles(QWidget *parent = 0);
    ~lpcircles();

private:
    Ui::UilpCircles *ui;
};

#endif // LPCIRCLES_H
