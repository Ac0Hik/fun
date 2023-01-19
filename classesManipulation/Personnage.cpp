#include"Personnage.h"
#include<iostream>

using namespace std;

Personnage::Personnage(): vie(100), mana(100),m_arme(0){ m_arme = new Arme(); }
Personnage::Personnage(string nom,int degats): vie(100), mana(100), m_arme(0){ m_arme = new Arme(nom,degats); }
Personnage::Personnage(int lifeHP,int manaPts) : vie(lifeHP), mana(manaPts){}
Personnage::Personnage(Personnage const& copie): vie(copie.vie), mana(copie.mana), m_arme(0){ m_arme = new Arme(*(copie.m_arme)); }
Personnage::~Personnage(){ delete m_arme; }

void Personnage::recevoirDegats(int nbDegats){
    vie -= nbDegats;
    if(vie < 0){
        vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible){
    cible.recevoirDegats(m_arme->getDegats());
}

void Personnage::boirPotionDeVie(int quantitePotion){
    vie += quantitePotion;
    if(vie > 100){
        vie = 100;
    }
}

void Personnage::changerArme(std::string nouvelleArm,int degatsNouvelleArme){
    m_arme->changer(nouvelleArm,degatsNouvelleArme);
}
bool Personnage::estVivant(){

    if(vie > 100){
        return true;
    }else{
        return false;
    }
}

void Personnage::afficherEtat() const{

    cout << "mes points de vie : " << vie << endl << "mes points de mana : " << mana << endl;
    m_arme->afficher();
}
Personnage& Personnage::operator=(Personnage const& affectedPerso){
    if(this != &affectedPerso){
        vie = affectedPerso.vie;
        mana = affectedPerso.mana;
        delete m_arme;
        m_arme = new Arme(*(affectedPerso.m_arme));
    }
    return *this;
}

