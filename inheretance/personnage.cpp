#include"personnage.h"
#include<iostream>

using namespace std;

Person::Person(): m_life(100), m_name("character name"){}
Person::Person(string nom): m_life(100), m_name(nom){}

void Person::recevoireDegat(int degat){
    m_life -= degat;
    if(m_life < 0)
        m_life = 0;
}

void Person::coupDePoint(Person &target) const {
    target.recevoireDegat(15);
}

void Person::introduce() const {

    cout << "hello my name is " << m_name << endl << "i have " << m_life << " health points" << endl;
}
