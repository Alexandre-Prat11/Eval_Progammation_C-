//Nom du fichier = moteur.h, Auteur = Prat Alexandre, Version = 1.0
#include "moteur.h"
#include <iostream>

int main() {
    CMoteur m1;
    m1.afficher();

    CMoteur m2(2.0f, 150, "Diesel");
    m2.accelerer();

    m2.accelerer(2000);

    m2.demarrer();
    m2.accelerer();
    m2.afficher();

    m2.accelerer(2500);
    m2.afficher();

    m2.accelerer(5000);
    m2.afficher();

    m2.arreter();
    m2.afficher();

    return 0;
}