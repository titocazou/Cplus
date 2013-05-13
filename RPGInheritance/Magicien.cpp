#include "Magicien.h"
 using namespace std;

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
