#include <string>
#include "date.h"
class Auteur{;
public:
    Auteur();
    Auteur(int id,const std::string& nom, const std::string& prenom, const Date& dateNaissance);
    int getId() const;
    void afficherInfo() const;
private:
    int id_;
    std::string nom_;
    std::string prenom_;
    Date dateNaissance_;        
};