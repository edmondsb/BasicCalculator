#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    myCalculator(new Calculator)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button7_clicked()
{
   // QString text = ui->display->text() + "7";
   // ui->display->setText(text);
    myCalculator->processUserInput("7");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_button8_clicked()
{
    myCalculator->processUserInput("8");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_button9_clicked()
{
    myCalculator->processUserInput("9");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_button4_clicked()
{
    myCalculator->processUserInput("4");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_button5_clicked()
{
    myCalculator->processUserInput("5");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_button6_clicked()
{
    myCalculator->processUserInput("6");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_button1_clicked()
{
    myCalculator->processUserInput("1");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_button2_clicked()
{
    myCalculator->processUserInput("2");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_button3_clicked()
{
    myCalculator->processUserInput("3");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_button0_clicked()
{
    myCalculator->processUserInput("0");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_equalButton_clicked()
{
    myCalculator->processUserInput("=");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_addButton_clicked()
{
    myCalculator->processUserInput("+");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_minusButton_clicked()
{
    myCalculator->processUserInput("-");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_multiplyButton_clicked()
{
    myCalculator->processUserInput("X");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_divideButton_clicked()
{
    myCalculator->processUserInput("/");
    ui->display->setText(myCalculator->getCurrentValue());
}

void MainWindow::on_clearButton_clicked()
{
    myCalculator->processUserInput("C");
    ui->display->setText(myCalculator->getCurrentValue());
}






