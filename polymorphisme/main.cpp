#include <iostream>
#include<vector>
#include"Garage.h"


using namespace std;
void introduce(Vehicule const& v);

int main()
{
    Garage molchi;
    molchi.addVehicule(new Motorcycle(15,"kawa"));
    molchi.addVehicule(new Car(200,"7dida"));
    molchi.addVehicule(new Truck(80,5,"cocain"));
    molchi.showGarageStatus();
    cout << "this garage has "<< molchi.tiresNumber() << " tires" << endl;
    molchi.removeVehicule();
    molchi.removeVehicule();
    molchi.showGarageStatus();
    cout << "this garage has "<< molchi.tiresNumber() << " tires" << endl;




    return 0;
}

void introduce(Vehicule const& v){
    v.showType();
}
