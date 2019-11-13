#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <calculator.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button0_clicked();

    void on_equalButton_clicked();

    void on_addButton_clicked();

    void on_minusButton_clicked();

    void on_multiplyButton_clicked();

    void on_divideButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::MainWindow *ui;
    Calculator *myCalculator;

};

#endif // MAINWINDOW_H
