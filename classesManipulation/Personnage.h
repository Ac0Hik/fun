#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include<string>
#include"Arme.h"

class Personnage{
    public:
    //methods
    Personnage();
    Personnage(std::string, int);
    Personnage(int lifeHP,int manaPts);
    Personnage(Personnage const& copie);
    void recevoirDegats(int );
    void attaquer(Personnage &);
    void boirPotionDeVie(int );
    void changerArme(std::string , int );
    bool estVivant();
    void afficherEtat() const;
    Personnage& operator=(Personnage const& affectedperso);
    ~Personnage();

    //------------------
    private:
    //attributs

    int vie;
    int mana;
    Arme *m_arme;

    //--------------------
};


#endif // PERSONNAGE_H_INCLUDED
