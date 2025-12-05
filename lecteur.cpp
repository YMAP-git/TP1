#include <iostream>
#include "lecteur.h"
using namespace std;

Lecteur::Lecteur(): identifiant_(0), nom_("Inconnu"), prenom_("Inconnu"){}
Lecteur::Lecteur(int identifiant,const std::string& nom, const std::string& prenom)
    : identifiant_(identifiant), nom_(nom), prenom_(prenom){}
int Lecteur::getIdentifiant() const {
    return identifiant_;
}
void Lecteur::afficherInfo() const {
    cout << "Id_lecteur: " << identifiant_ << endl;
    cout << "Nom: " << nom_ << endl;
    cout << "Prenom: " << prenom_ << endl;


}
