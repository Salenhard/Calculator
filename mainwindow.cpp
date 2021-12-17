#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_diget_1_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"1");
}


void MainWindow::on_pushButton_diget_2_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"2");
}


void MainWindow::on_pushButton_diget_7_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"7");
}


void MainWindow::on_pushButton_diget_4_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"4");
}


void MainWindow::on_pushButton_diget_0_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"0");
}


void MainWindow::on_pushButton_diget_3_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"3");
}


void MainWindow::on_pushButton_diget_6_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"6");
}


void MainWindow::on_pushButton_diget_9_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"9");
}


void MainWindow::on_pushButton_diget_8_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"8");
}


void MainWindow::on_pushButton_diget_5_clicked()
{
    ui->label_input_field->setText(ui->label_input_field->text()+"5");
}


void MainWindow::on_pushButton_clear_clicked()
{
    ui->label_input_field->setText("");
}

