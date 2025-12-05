#include <string>
#include "livre.h"
class Lecteur{
public:
    Lecteur();
    Lecteur(int identifiant,const std::string& nom, const std::string& prenom, const Date& dateNaissance);
    int getIdentifiant() const;
    void afficherInfo() const;

private:
    int identifiant_;
    std::string nom_;
    std::string prenom_;
    Date dateNaissance_;        
};