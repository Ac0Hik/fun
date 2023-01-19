#ifndef WARRIOR_H_INCLUDED
#define WARRIOR_H_INCLUDED

#include<iostream>
#include<string>
#include"personnage.h"

class warrior : public Person{
    public:
        warrior();
        warrior(std::string);
        void warriorSecretPunch(warrior &target) const;
        void introduce() const;

};

#endif // WARRIOR_H_INCLUDED
