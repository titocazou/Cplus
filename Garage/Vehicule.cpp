#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule() : m_prix(100)
{}

Vehicule::Vehicule(int prix)
    :m_prix(prix)
{}

void Vehicule::affiche() const
//J'en profite pour modifier un peu les fonctions d'affichage
{
    cout << "Ceci est un vehicule coutant " << m_prix << " euros." << endl;
}

Vehicule:: ~Vehicule() //Même si le destructeur ne fait rien, on doit le mettre !
{}

Voiture::Voiture() : Vehicule(), m_portes(4)
{}
Voiture::Voiture(int prix, int portes)
    :Vehicule(prix), m_portes(portes)
{}

void Voiture::affiche() const
{
    cout << "Ceci est une voiture avec " << m_portes << " portes et coutant " << m_prix << " euros." << endl;
}

Voiture:: ~Voiture()
{}

Moto::Moto() : Vehicule(), m_vitesse(250)
{}
Moto::Moto(int prix, double vitesseMax)
    :Vehicule(prix), m_vitesse(vitesseMax)
{}

void Moto::affiche() const
{
    cout << "Ceci est une moto allant a " << m_vitesse << " km/h et coutant " << m_prix << " euros." << endl;
}

Moto:: ~Moto()
{}
