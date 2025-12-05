#include <string>
#include "date.h"
class Livre{
public:
    Livre();
    Livre(const std::string& titre, const std::string& auteur,const std::string& genre ,const std::string& langue, const Date& datePublication,int isbn, int nbExemplaires);
    int getIsbn() const;
    int getNbExemplaires() const;
    void afficherInfo() const;
private:
    std::string titre_;
    std::string auteur_;
    std::string genre_;
    std:: string langue;
    Date datePublication_;
    long int isbn_;
    int nbExemplaires_;
};