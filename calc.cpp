#include "calc.h"
#include "ui_calc.h"

calc::calc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calc)
{
    ui->setupUi(this);
}

calc::~calc()
{
    delete ui;
}

long long a,b,c,p,m,mp,d,koren,global,pam=0;

void calc::on_key1_clicked()
{
    global=global*10+1;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_key2_clicked()
{
    global=global*10+2;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_keyPlus_clicked()
{
    p=1;
    a=global;
    global=0;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_keyRavno_clicked()
{
    if (p==1)
    {
        p=0;
        b=global;
        //global=a+b;
        //c=a+b+pam;
        ui->resultLine->setText(QString::number(a+b+pam));
        pam=a+b+pam;
       // global=0;
      //  a=0;
       // b=0;
    }

    if (m==1)
    {
        m=0;
        b=global;
        ui->resultLine->setText(QString::number(a-b));
       pam=global;
      //  a=0;
       // b=0;
    }

    if (mp==1)
    {
        mp=0;
        b=global;
        ui->resultLine->setText(QString::number(a*b));
        global=0;
        a=0;
        b=0;
    }

    if (d==1)
    {
        d=0;
        b=global;
        ui->resultLine->setText(QString::number(a/b));
        global=0;
        a=0;
        b=0;
    }

}

void calc::on_key3_clicked()
{
    global=global*10+3;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_key4_clicked()
{
    global=global*10+4;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_key5_clicked()
{
    global=global*10+5;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_key6_clicked()
{
    global=global*10+6;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_key7_clicked()
{
    global=global*10+7;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_key8_clicked()
{
    global=global*10+8;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_key9_clicked()
{
    global=global*10+9;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_key0_clicked()
{
    global=global*10;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_keyMinus_clicked()
{
    m=1;
    a=global;
    global=0;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_keyClear_clicked()
{
    global=0;
    pam=0;
}

void calc::on_keyMultiPlicate_clicked()
{
    mp=1;
    a=global;
    global=0;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_keyDelenie_clicked()
{
    d=1;
    a=global;
    global=0;
    ui->resultLine->setText(QString::number(global));
}

void calc::on_keyPlusMnus_clicked()
{
     global=global*(-1);
    ui->resultLine->setText(QString::number(global));
}

void calc::on_keySQRT_clicked()
{
        ui->resultLine->setText(QString::number(sqrt(global)));
}
