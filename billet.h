#ifndef BILLET_H
#define BILLET_H
#include<QString>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include <QtCharts>
class Billet
{
public:

    Billet();
    Billet(QString,QString,QString,QString,QString,QString,QString);
    QString getid_billet();
    QString getemplacement();
    QString getnum_vol();
    QString getnum_voyageur();
     QString getmail();
    QString getclassemen();
    void setid_billet(QString);
    void setemplacement(QString);
     void setmail(QString);
    void setnum_vol(QString);
    void setclassement(QString);
    QString getnom();
    void setnom(QString);
     void setnum_voyageur(QString);
     bool ajouter();
     bool supprimer(QString);
     QSqlQueryModel * afficher();
      bool modifier(QString);
      QSqlQueryModel * rechercherNom(QString );
      QSqlQueryModel * AfficherTri();
      QSqlQueryModel * AfficherTriid();
      QSqlQueryModel *AfficherTrivoy();
      QSqlQueryModel * AfficherTrivol();
      QString  apercu_pdf();
      QSqlQueryModel * afficher_2();
      QChart *stat();
private:
 QString  emplacement ,num_vol , num_voyageur ;
 QString  id_billet,classement,nom,mail ;
};

#endif // BILLET_H
