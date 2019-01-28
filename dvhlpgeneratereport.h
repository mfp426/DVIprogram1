#ifndef DVHLPGENERATEREPORT_H
#define DVHLPGENERATEREPORT_H
#include <Qwidget>
namespace Ui {
class LPGenerateReport;
}

class DVHLPGenerateReport : public QWidget
{
    Q_OBJECT

public:
    explicit DVHLPGenerateReport(QWidget *parent = 0);
    ~DVHLPGenerateReport();

private:
    Ui::LPGenerateReport *ui;
};
#endif // DVHLPGENERATEREPORT_H
