//Nom du fichier = moteur.h, Auteur = Prat Alexandre, Version = 1.0
#include "moteur.h"
#include <iostream>

CMoteur::CMoteur(float cyl, int puiss, std::string carb) 
    : cylindree(cyl), puissance(puiss), typeCarburant(carb), enMarche(false), regime(0) {}

CMoteur::~CMoteur() {
    std::cout << "Destructon du moteur\n";
}    

void CMoteur::demarrer() {
    enMarche = true;
    regime = 900;
}

void CMoteur::arreter() {
    enMarche = false;
    regime = 0;
}

void CMoteur::accelerer(int trMin) {
    if (enMarche == true) {
        regime = regime + trMin;
        if (regime > 6500) {

        }
    }
}

int CMoteur::getPuissance() const {
    return puissance;
}

void CMoteur::afficher() const {
    std::cout << cylindree << "L, " << puissance << "ch, " << typeCarburant
              << ", " << (enMarche ? "Demarre" : "Arrete") << ", " << regime << " tr/min\n";
}