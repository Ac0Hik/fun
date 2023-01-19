#include <iostream>
#include<string>
#include"Personnage.h"

using namespace std;



int main()
{
    Personnage achik, enemy("sword ",30);

    achik.attaquer(enemy);
    enemy.attaquer(achik);
    enemy.afficherEtat();
    achik.changerArme("sword2",50);
    achik.attaquer(enemy);
    cout << "-----------------avant le bu du portion de vie ------------------" << endl;
    enemy.afficherEtat();
    cout << "-----------------apres------------------" << endl;
    enemy.boirPotionDeVie(40);
    enemy.afficherEtat();


    return 0;
}
