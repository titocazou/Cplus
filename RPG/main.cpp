#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;


int main()
{
    // Cr�ation des personnages
    Personnage goliath("Ep�e aiguis�e", 20);
    Personnage david (goliath);
    // Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 40);
    goliath.attaquer(david);

    // Temps mort ! Voyons voir la vie de chacun...
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}