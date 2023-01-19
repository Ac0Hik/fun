#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include<iostream>
#include<string>

class Person {
    public:
        Person();
        Person(std::string);
        void recevoireDegat(int degat);
        void coupDePoint(Person &target) const ;
        void showStatus(){ std::cout << "HP: " << m_life << std::endl << "name :" << m_name << std::endl; }
        void introduce() const;

    protected:
        int m_life;
        std::string m_name;

};

#endif // PERSONNAGE_H_INCLUDED
