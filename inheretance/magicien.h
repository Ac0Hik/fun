#ifndef MAGICIEN_H_INCLUDED
#define MAGICIEN_H_INCLUDED

#include<iostream>
#include<string>
#include"personnage.h"

class Magicien : public Person{
    public:
        Magicien();
        Magicien(std::string);
       void fireBallHit() const;
       void waterBallHit() const;
       void introduce() const;
    private:
        int m_mana;

};

#endif // MAGICIEN_H_INCLUDED
