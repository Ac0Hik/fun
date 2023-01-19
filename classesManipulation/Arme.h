#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED

#include<string>

class Arme{

    public :

    Arme();
    Arme(std::string nom , int degats);
    void changer(std::string nvnom,int degats);
    void afficher() const;
    int getDegats() const ;


    //----------------------
    private :

    std::string m_nomArme;
    int m_armeDegats;

};


#endif // ARME_H_INCLUDED
