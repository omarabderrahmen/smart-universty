#include "client.h"

Client::Client()
{
     Nom="";
     Prenom="";
     Adresse_mail="";
     CIN="";
     numero_telephone="";
}
void Client::setCIN(QString n)
{CIN=n;}
void Client::setPrenom(QString n)
{Prenom=n;}
void Client::setNom(QString n)
{Nom=n;}
void Client::setAdresse_mail(QString n)
{Adresse_mail=n;}
void Client::setnumero_telephone(QString n)
{numero_telephone=n;}
QString Client::get_CIN()
{return CIN;}
QString Client::get_Prenom()
{return Prenom;}
QString Client::get_Nom()
{return Nom;}
QString Client::get_Adresse_mail()
{return Adresse_mail;}
QString Client::get_numero_telephone()
{return numero_telephone;}
