
#include "Personnage.h"

using namespace std;

Personnage::Personnage() : m_vie(100), m_nom("Jack")
{

}

Personnage::Personnage(string nom) : m_vie(100), m_nom(nom)
{

}


void Personnage::sePresenter() const
{
    cout << "Bonjour, je m'appelle " << m_nom << "." << endl;
    cout << "J'ai encore " << m_vie << " points de vie." << endl;
}

void Personnage::recevoirDegats(int degats)
{
    m_vie -= degats;
}

void Personnage::coupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(10);
}

Magicien::Magicien() : Personnage(), m_mana(100)
{


}

Magicien::Magicien(string nom) : Personnage(nom), m_mana(100)
{


}

void Magicien::sePresenter() const
{
   Personnage::sePresenter();
   cout << "Je suis un putain de Magos rockstar avec " << m_mana << " points de mana BIATCH!" << endl;
}

