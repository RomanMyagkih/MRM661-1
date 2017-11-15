#include "program.h"
#include "ui_program.h"
#include <calc.h>
#include "pcap_pr.h"
#include <QFile>
#include <QFileDialog>
#include <QDebug>


program::program(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::program)
{
    ui->setupUi(this);


}

program::~program()
{
    delete ui;
}

void program::on_actionCalculator_triggered()
{
    calc *ddd = new calc (this);
    ddd->show();
}

void program::on_actionPCap_triggered()
{
pcap_pr *aaa= new pcap_pr (this);
aaa->show();
}


