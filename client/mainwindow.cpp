#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include"dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_CIN->setValidator(new QIntValidator(0,99999999,this));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Client c;
    c.setCIN(ui->lineEdit_CIN->text());
    c.setNom(ui->lineEdit_Nom->text());
    c.setPrenom(ui->lineEdit_Prenom->text());
    c.setAdresse_mail(ui->lineEdit_AdresseMail->text());
    c.setnumero_telephone(ui->lineEdit_numeroTelephone->text());

    Dialog d;
    d.setclient(c);
    d.exec();

}
