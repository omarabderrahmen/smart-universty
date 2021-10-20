#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::setclient(Client c)
{
    ui->lineEdit_CIND->setText(c.get_CIN());
    ui->lineEdit_NomD->setText(c.get_Nom());
    ui->lineEdit_PrenoD->setText(c.get_Prenom());
    ui->lineEdit_NumeroD->setText(c.get_numero_telephone());
    ui->lineEdit_AdresseMailD->setText(c.get_Adresse_mail());
}
