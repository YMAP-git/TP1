#include <iostream>
#include "lecteur.h"
using namespace std;



int main(){

    Date date1(29, 2, 2020); // Valid date (leap year)
    date1.printDate();
    Livre livre1("1984", "George Orwell", "Dystopian", "English", date1, 1234567890, 5);
    livre1.afficherInfo();
    cout<< "SAISI DES POTENTIELS LECTEURS" << endl;
    Lecteur lecteur1(1, "Doe", "John", Date(15, 6, 1990));
    lecteur1.afficherInfo();



    return 0;
}
