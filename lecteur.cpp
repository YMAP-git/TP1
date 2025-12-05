#include <iostream>
#include "lecteur.h"
using namespace std;

Lecteur::Lecteur(): identifiant_(0), nom_("Inconnu"), prenom_("Inconnu"), dateNaissance_() {}
Lecteur::Lecteur(int identifiant,const std::string& nom, const std::string& prenom, const Date& dateNaissance)
    : identifiant_(identifiant), nom_(nom), prenom_(prenom), dateNaissance_(dateNaissance) {}
int Lecteur::getIdentifiant() const {
    return identifiant_;
}
void Lecteur::afficherInfo() const {
    cout << "Identifiant: " << identifiant_ << endl;
    cout << "Nom: " << nom_ << endl;
    cout << "Prenom: " << prenom_ << endl;
    cout << "Date de Naissance: ";
    dateNaissance_.printDate();
}
