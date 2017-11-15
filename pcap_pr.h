#ifndef PCAP_PR_H
#define PCAP_PR_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include <QFile>
#include <QTextEdit>
#include <QFileDialog>
#include <QMainWindow>


namespace Ui {
class pcap_pr;
}

class pcap_pr : public QMainWindow
{
    Q_OBJECT

public:
    explicit pcap_pr(QWidget *parent = 0);
    QTextEdit *Textedit;
    ~pcap_pr();

public slots:

    void open();

private slots:
  // void on_actionOpen_triggered();  // хз что это,работает и без этой ф-ции

private:
    Ui::pcap_pr *ui;

};

#endif // PCAP_PR_H
