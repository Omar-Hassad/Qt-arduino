#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int ret = A.connect_arduino(); // lancer la connexion à arduino
    switch(ret)
    {
    case(0):
        qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
        break;
    case(1):
        qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
        break;
    case(-1):
        qDebug() << "arduino is not available";
        break;
    default:
        qDebug() << "unexpected value: "<<ret<<" !";
        break;
    }
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
    //le slot update_label suite à la reception du signal readyRead (reception des données).
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::update_label()
{
    QByteArray data = A.read_from_arduino();// on récupère les données de arduino via la liaison série
    if (data == "1")
    {
        ui->label_state_lampe1->setText("ON");
    }
    else if (data == "0")
    {
        ui->label_state_lampe1->setText("OFF");
    }
}

void MainWindow::on_pushButton_ON_clicked()// implémentation du slot bouton on
{
     A.write_to_arduino("1"); //envoyer 1 à arduino
}

void MainWindow::on_pushButton_OFF_clicked()// implémentation du slot bouton off
{
     A.write_to_arduino("0");  //envoyer 0 à arduino
}

void MainWindow::on_pushButton_Plus_clicked()// implémentation du slot bouton +
{
    A.write_to_arduino("2");   //envoyer 2 à arduino
}

void MainWindow::on_pushButton_Moins_clicked()// implémentation du slot bouton -
{
    A.write_to_arduino("3");  //envoyer 3 à arduino
}


