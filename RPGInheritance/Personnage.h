#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>

class Personnage
{
    public:
        Personnage();
        Personnage(std::string nom);
        void recevoirDegats(int degats);
        void coupDePoing(Personnage &cible) const;
        void sePresenter() const;

    protected:
        int m_vie;
        std::string m_nom;
};



class Magicien : public Personnage
{
    public:
    Magicien();
    Magicien(std::string nom);
        void bouleDeFeu() const;
        void bouleDeGlace() const;
        void sePresenter() const;

    private:
        int m_mana;
};


#endif
