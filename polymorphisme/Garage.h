#ifndef GARAGE_H_INCLUDED
#define GARAGE_H_INCLUDED
#include<vector>
#include<string>
#include"vehicule.h"

class Garage{
    public:
         Garage();
         Garage(std::string);
         virtual void showGarageStatus()const;
         void addVehicule(Vehicule*);
         void removeVehicule();
         int tiresNumber()const;
         virtual ~Garage();
    private:
        std::vector<Vehicule*> m_vehiculesListe;
        int m_capacity = 10;
        std::string m_name;


};


#endif // GARAGE_H_INCLUDED
