#ifndef CLIENT_H
#define CLIENT_H
#include<QString>

class Client
{
private:
 QString Nom;
 QString Prenom;
 QString Adresse_mail;
 QString CIN;
 QString numero_telephone;
public:
    void setCIN(QString n);
    void setPrenom(QString n);
    void setNom(QString n);
    void setAdresse_mail(QString n);
    void setnumero_telephone(QString n);
    QString get_CIN();
    QString get_Prenom();
    QString get_Nom();
    QString get_Adresse_mail();
    QString get_numero_telephone();
    Client();
};

#endif // CLIENT_H
