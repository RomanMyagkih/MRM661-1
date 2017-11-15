#ifndef CALC_H
#define CALC_H

#include <QWidget>

namespace Ui {
class calc;
}

class calc : public QWidget
{
    Q_OBJECT

public:
    explicit calc(QWidget *parent = 0);
    ~calc();

private slots:
    void on_key1_clicked();

    void on_key2_clicked();

    void on_keyPlus_clicked();

    void on_keyRavno_clicked();

    void on_key3_clicked();

    void on_key4_clicked();

    void on_key5_clicked();

    void on_key6_clicked();

    void on_key7_clicked();

    void on_key8_clicked();

    void on_key9_clicked();

    void on_key0_clicked();

    void on_keyMinus_clicked();

    void on_keyClear_clicked();

    void on_keyMultiPlicate_clicked();

    void on_keyDelenie_clicked();

    void on_keyPlusMnus_clicked();

    void on_keySQRT_clicked();

private:
    Ui::calc *ui;
};

#endif // CALC_H
