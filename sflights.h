#ifndef SFLIGHTS_H
#define SFLIGHTS_H

#include <QDialog>

namespace Ui {
class SFlights;
}

class SFlights : public QDialog
{
    Q_OBJECT

public:
    explicit SFlights(QWidget *parent = nullptr);
    ~SFlights();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::SFlights *ui;
};

#endif // SFLIGHTS_H
