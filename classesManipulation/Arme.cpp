#include"Arme.h"
#include<iostream>

 using namespace std;

Arme::Arme(): m_nomArme("sife 3adi"),m_armeDegats(10){}
Arme::Arme(string nomArme,int degats): m_nomArme(nomArme),m_armeDegats(degats){}


void Arme::changer(string nom , int degats){

    m_nomArme = nom;
    m_armeDegats = degats;

}

void Arme::afficher() const{

    cout << "nom d'arme : " << m_nomArme << endl << "degats d'arme : " << m_armeDegats << endl;
}
int Arme::getDegats() const{
    return m_armeDegats;
}
