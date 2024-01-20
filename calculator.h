#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;
}
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_btn_0_clicked();

    void on_btn_1_clicked();

    void on_plus_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_minus_clicked();

    void on_multiply_clicked();

    void on_divide_clicked();

    void on_percent_clicked();

    void on_clear_clicked();

    void on_clear_all_clicked();

    void on_radical_clicked();

    void on_delet_clicked();



    void on_equale_clicked();

private:
    Ui::calculator *ui;
};
#endif // CALCULATOR_H
