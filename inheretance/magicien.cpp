#include"magicien.h"
#include<iostream>
#include<string>

using namespace std;

Magicien::Magicien(): Person(),m_mana(100){}
Magicien::Magicien(string name):Person(name),m_mana(100){}

void Magicien::waterBallHit() const{
     cout << "water ball hit" << endl;
}

void Magicien::fireBallHit() const{
    cout << "fire ball hit" << endl;
}

void Magicien::introduce() const{

    cout << "hello i am the wizard " << m_name << endl << "i have " << m_life << " health points" << endl << "and " << m_mana << " mana points" << endl;
}
