#include "program.h"
#include <QApplication>
#include <calc.h>
#include <pcap_pr.h>
#include <fstream>
#include "packet.h"
#include <QDebug>



int main(int argc, char *argv[])
{
    qDebug() << "main() startted";
    QApplication a(argc, argv);
    program w;
    w.show();




    return a.exec();
}
