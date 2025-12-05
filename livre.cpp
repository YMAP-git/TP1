#include <iostream>
#include "livre.h"
using namespace std;
Livre::Livre(): titre_("Inconnu"), auteur_(), genre_("Inconnu"), langue("Inconnu"), datePublication_(), isbn_(0), nbExemplaires_(0) {}
Livre::Livre(const std::string& titre, const Auteur& auteur,const std::string& genre ,const std::string& langue, const Date& datePublication,int isbn, int nbExemplaires)
    : titre_(titre), auteur_(auteur), genre_(genre), langue(langue), datePublication_(datePublication), isbn_(isbn), nbExemplaires_(nbExemplaires) {}
int Livre::getIsbn() const {
    return isbn_;
}
int Livre::getNbExemplaires() const {
    return nbExemplaires_;
}
void Livre::afficherInfo() const {
    cout << "Titre: " << titre_ << endl;
    cout << "Auteur: " ;
    auteur_.afficherInfo();
    cout << "Genre: " << genre_ << endl;
    cout << "Langue: " << langue << endl;
    cout << "Date de Publication: ";
    datePublication_.printDate();
    cout << "ISBN: " << isbn_ << endl;
    cout << "Nombre d'Exemplaires: " << nbExemplaires_ << endl;
}