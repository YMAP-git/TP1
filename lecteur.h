#include <string>
class Lecteur{
public:
    Lecteur();
    Lecteur(int identifiant,const std::string& nom, const std::string& prenom);
    int getIdentifiant() const;
    void afficherInfo() const;

private:
    int identifiant_;
    std::string nom_;
    std::string prenom_;
};