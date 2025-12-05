#include <iostream>
#include "auteur.h"
using namespace std;
Auteur::Auteur(): id_(0), nom_("Inconnu"), prenom_("Inconnu"), dateNaissance_() {}
Auteur::Auteur(int id,const std::string& nom, const std::string& prenom, const Date& dateNaissance)
    : id_(id), nom_(nom), prenom_(prenom), dateNaissance_(dateNaissance) {}
int Auteur::getId() const {
    return id_;
}
void Auteur::afficherInfo() const {
    cout << "ID_AUTEUR: " << id_ << endl;
    cout << "Nom: " << nom_ << endl;
    cout << "Prenom: " << prenom_ << endl;
    cout << "Date de Naissance: ";
    dateNaissance_.printDate();
}