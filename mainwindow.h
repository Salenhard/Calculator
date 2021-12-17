#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_diget_1_clicked();

    void on_pushButton_diget_2_clicked();

    void on_pushButton_diget_7_clicked();

    void on_pushButton_diget_4_clicked();

    void on_pushButton_diget_0_clicked();

    void on_pushButton_diget_3_clicked();

    void on_pushButton_diget_6_clicked();

    void on_pushButton_diget_9_clicked();

    void on_pushButton_diget_8_clicked();

    void on_pushButton_diget_5_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
