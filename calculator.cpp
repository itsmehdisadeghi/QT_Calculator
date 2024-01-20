#include "calculator.h"
#include "ui_calculator.h"
#include "cmath"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}

int fnum = 0 , snum = 0 , oper = 0;


void calculator::on_btn_0_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 0 ;
    ui -> display_1 -> setText(QString::number(cn));
}

void calculator::on_btn_1_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 1 ;
    ui -> display_1 -> setText(QString::number(cn));
}

void calculator::on_btn_2_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 2 ;
    ui -> display_1 -> setText(QString::number(cn));
}

void calculator::on_btn_3_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 3 ;
    ui -> display_1 -> setText(QString::number(cn));
}

void calculator::on_btn_4_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 4 ;
    ui -> display_1 -> setText(QString::number(cn));
}

void calculator::on_btn_5_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 5 ;
    ui -> display_1 -> setText(QString::number(cn));
}

void calculator::on_btn_6_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 6 ;
    ui -> display_1 -> setText(QString::number(cn));
}

void calculator::on_btn_7_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 7 ;
    ui -> display_1 -> setText(QString::number(cn));
}

void calculator::on_btn_8_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 8 ;
    ui -> display_1 -> setText(QString::number(cn));
}

void calculator::on_btn_9_clicked()
{
    int cn = ui -> display_1 -> text().toInt();
    cn *= 10;
    cn += 9 ;
    ui -> display_1 -> setText(QString::number(cn));
}



void calculator::on_plus_clicked()
{
    oper = 1;
    fnum = ui -> display_1 -> text().toInt();
    ui -> display_2 -> setText(ui -> display_1 -> text());
    ui -> display_4 -> setText("+");
    ui -> display_1 -> setText("0");
    ui -> display_3 -> setText(NULL);
}

void calculator::on_minus_clicked()
{
    oper = 2;
    fnum = ui -> display_1 -> text().toInt();
    ui -> display_2 -> setText(ui -> display_1 -> text());
    ui -> display_4 -> setText("–");
    ui -> display_1 -> setText("0");
    ui -> display_3 -> setText(NULL);
}

void calculator::on_multiply_clicked()
{
    oper = 3;
    fnum = ui -> display_1 -> text().toInt();
    ui -> display_2 -> setText(ui -> display_1 -> text());
    ui -> display_4 -> setText("×");
    ui -> display_1 -> setText("0");
    ui -> display_3 -> setText(NULL);
}

void calculator::on_divide_clicked()
{
    oper = 4;
    fnum = ui -> display_1 -> text().toInt();
    ui -> display_2 -> setText(ui -> display_1 -> text());
    ui -> display_4 -> setText("÷");
    ui -> display_1 -> setText("0");
    ui -> display_3 -> setText(NULL);
}

void calculator::on_percent_clicked()
{
    oper = 5;
    fnum = ui -> display_1 -> text().toInt();
    ui -> display_2 -> setText(ui -> display_1 -> text());
    ui -> display_4 -> setText("%");
    ui -> display_1 -> setText("0");
    ui -> display_3 -> setText(NULL);
}

void calculator::on_radical_clicked()
{
    oper = 6;
    fnum = ui -> display_1 -> text().toInt();
    ui -> display_2 -> setText(ui -> display_1 -> text());
    ui -> display_4 -> setText("√");
    ui -> display_1 -> setText("0");
    ui -> display_3 -> setText(NULL);
}



void calculator::on_clear_clicked()
{
    ui -> display_1 -> setText("0");
}

void calculator::on_clear_all_clicked()
{
    oper = 0;
    ui -> display_1 -> setText("0");
    ui -> display_2 -> setText(" ");
    ui -> display_3 -> setText(" ");
    ui -> display_4 -> setText(" ");
}

void calculator::on_delet_clicked()
{
    int num = ui -> display_1 -> text().toInt();
    int n = num % 10;
    num -= n;
    num /= 10;
    ui -> display_1 ->setText(QString::number(num));
}

void calculator::on_equale_clicked()
{
    snum = ui -> display_1 -> text().toInt();
    if (oper == 1)
    {
        ui -> display_3 -> setText(QString::number(snum));
        ui -> display_1 -> setText(QString::number(fnum + snum));
    }
    if (oper == 2)
    {
        ui -> display_3 -> setText(QString::number(snum));
        ui -> display_1 -> setText(QString::number(fnum - snum));
    }
    if (oper == 3)
    {
        ui -> display_3 -> setText(QString::number(snum));
        ui -> display_1 -> setText(QString::number(fnum * snum));
    }
    if (oper == 4)
    {
        ui -> display_3 -> setText(QString::number(snum));
        ui -> display_1 -> setText(QString::number(fnum / snum));
    }
    if (oper == 5)
    {
        ui -> display_3 -> setText(QString::number(snum));
        ui -> display_1 -> setText(QString::number(fnum % snum));
    }
    if (oper == 6)
    {
        ui -> display_3 -> setText(QString::number(snum));
        ui -> display_1 -> setText(QString::number(sqrt(fnum)));
    }
}

