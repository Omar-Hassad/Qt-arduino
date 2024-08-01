#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "arduino.h"

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
    void update_label();

    void on_pushButton_ON_clicked();

    void on_pushButton_OFF_clicked();

    void on_pushButton_Plus_clicked();

    void on_pushButton_Moins_clicked();

private:
    Ui::MainWindow *ui;
    Arduino A;
};
#endif // MAINWINDOW_H
