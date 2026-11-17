//Nom du fichier = moteur.h, Auteur = Prat Alexandre, Version = 1.0
*ifndef MOTEUR_H
#define MOTEUR_H

#include <string>

class CMoteur
{
private:
    float cylindree;
    int puissance;
    std::string typeCarburant;
    bool enMarche;
    int regime;

public:
    CMoteur();
    CMoteur(float cyl = 1.2f, int puiss = 75, std::string carb = "Essence");
    ~CMoteur()

    void demarrer();
    void arreter();
    void accelerer(int trMin);
    int getPuissance();
    void afficher();
};

#endif