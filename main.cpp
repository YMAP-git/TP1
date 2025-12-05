#include <iostream>
#include "livre.h"
using namespace std;



int main(){

    Date date1(29, 2, 2020); // Valid date (leap year)
    date1.printDate();
    Livre livre1("1984", "George Orwell", "Dystopian", "English", date1, 1234567890, 5);
    livre1.afficherInfo();



    return 0;
}
