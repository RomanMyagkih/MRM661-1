#include "pcap_pr.h"
#include "ui_pcap_pr.h"
#include <fstream>
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QVector>
#include <QTextEdit>
#include <packet.h>
#include <QDataStream>

PacketStream ps;
pcap_pr::pcap_pr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pcap_pr)
{
    ui->setupUi(this);
      connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(open()));
}

pcap_pr::~pcap_pr()
{
    delete ui;
}


void pcap_pr::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open file, men"), "",
            tr("Pcap Files (*.cap)"));
    qDebug()<<fileName;



    if ( fileName == "" )
        return;

   QFile MyFile(fileName);

    if (!MyFile.open(QIODevice::ReadOnly))
    {
            qDebug() << "error open file";
            return;
    }
    qDebug() << "Size = " << MyFile.size();
    qDebug() << "Pos = " << MyFile.pos();

    MyFile.read((char *)&ps.fHeader, 24);

    qDebug() <<"max length="<< ps.fHeader.snaplen <<
               endl<<"data link type"<< ps.fHeader.linktype;

    qDebug() << "Pos = " << MyFile.pos();

    while ( MyFile.pos() < MyFile.size() )
    {
       MyFile.read(1);
      // MyFile.read((char *)&ps.fHeader, 24);
    }
 //   QDataStream pst(&MyFile);
   // ui->textEdit->setText(pst.());
}



























/*
    qDebug() << "Size = " << file.size();
    qDebug() << "Pos = " << file.pos();

    file.read((char *)&ps.fHeader, 24);

    qDebug() << ps.fHeader.snaplen << "   " << ps.fHeader.linktype;

    qDebug() << "Pos = " << file.pos();



    QFile MyFile(fileName);
    MyFile.open(QIODevice::ReadOnly);
    QTextStream pst(&MyFile);
    ui->textEdit->setText(pst.readAll());
    MyFile.close();

    if (fileName != "")
    {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly))
        {QMessageBox::critical(this, tr ("Error open"), tr("Could not open file"));
            return;
    }
     //QVector pop= myline;
     */

/*

    if ( fName == "" )
        return;

    QFile file(fName);

    if (!file.open(QIODevice::ReadOnly))
    {
            qDebug()<<"error open file";
    }

}

void Notepad::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File") , "",
        tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

    if (fileName != "") {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        }
        QTextStream in(&file);
        textEdit->setText(in.readAll());
        file.close();
    }
}

*/
