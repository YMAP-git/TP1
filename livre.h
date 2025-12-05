#include <string>
#include "auteur.h"
class Livre{
public:
    Livre();
    Livre(const std::string& titre, const Auteur& auteur,const std::string& genre ,const std::string& langue, const Date& datePublication,int isbn, int nbExemplaires);
    int getIsbn() const;
    int getNbExemplaires() const;
    void afficherInfo() const;
private:
    std::string titre_;
    Auteur auteur_;
    std::string genre_;
    std:: string langue;
    Date datePublication_;
    int isbn_;
    int nbExemplaires_;
};