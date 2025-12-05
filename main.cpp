#include <iostream>
#include "lecteur.h"
#include "livre.h"
using namespace std;

int main(){

    Auteur auteur1(1, "Orwell", "George", Date(25, 6, 1903));
    auteur1.afficherInfo();
    cout <<"/n/n";
    Livre livre1("1984", auteur1, "Dystopian", "English", Date(15,9,2003), 1234567890, 5);
    livre1.afficherInfo();
    cout<< "SAISI DES POTENTIELS LECTEURS" << endl;
    Lecteur lecteur1(1, "Doe", "John");
    lecteur1.afficherInfo();



    return 0;
}
