#include<iostream>
#include<string>
#include"Garage.h"

using namespace std;

Garage::Garage():m_name("nameless :( "){}

Garage::~Garage(){
    for(int i(0); i < m_vehiculesListe.size(); i++){
        delete m_vehiculesListe[i];
        m_vehiculesListe[i] = 0;
    }
}
Garage::Garage(string name):m_name(name){}

void Garage::showGarageStatus() const{
    cout << "----------------garage status:----------------" << endl;
    cout << "garage name :   " << m_name << "---------------- " << endl;
    cout << "the garage currently contains " << m_vehiculesListe.size() << " vehicle." << endl;
    for(int i(0); i < m_vehiculesListe.size() ; i++){
        m_vehiculesListe[i]->showType();
    }
}

void Garage::addVehicule(Vehicule *v){//to be overridden later
    if(m_capacity == m_vehiculesListe.size()){
        cout << "garage is full :< come back later :)" << endl;
    }else{
        m_vehiculesListe.push_back(v);
    }

}
void Garage::removeVehicule(){
    //for now it will only remove the last element
    if(m_vehiculesListe.size() == 0){
        cout << "there is no vehicle in the garage" << endl;
    }else{
        m_vehiculesListe.pop_back();
   }
}
int Garage::tiresNumber()const{
    int nb(0);
    int sz = m_vehiculesListe.size();
    for(int i(0); i<sz; i++){
        nb += m_vehiculesListe[i]->tiresNumber();
    }
    return nb;
}





