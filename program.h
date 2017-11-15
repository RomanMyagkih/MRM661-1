#ifndef PROGRAM_H
#define PROGRAM_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include <QFile>
#include <QTextEdit>



namespace Ui {
class program;
}

class program : public QMainWindow
{
    Q_OBJECT

public:
    explicit program(QWidget *parent = 0);
    ~program();







private slots:
    void on_actionCalculator_triggered();

    void on_actionPCap_triggered();

private:
    Ui::program *ui;

};

#endif // PROGRAM_H
