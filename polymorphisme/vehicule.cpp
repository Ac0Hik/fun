#include<iostream>
#include<string>
#include"vehicule.h"

using namespace std;

Vehicule::Vehicule(){}
Vehicule::Vehicule(int prix): m_price(prix){}
Vehicule::~Vehicule(){}

void Vehicule::showType() const{
    cout << "this is a vehicule" << endl;
}
int Vehicule::getPrice(){
    return m_price;
}


//-----------------car functions-----------------------
Car::Car(int price,string name): Vehicule(price),m_type(name){}
Car::Car():Vehicule::Vehicule(){}
Car::~Car(){}

void Car::showType() const{
     cout << "this is a car type: " << m_type << endl;
}
 int Car::tiresNumber() const{
    // cout<<"car tires" << endl;
    return 4;
}

//-------------------Motorcycle functions-------------
Motorcycle::Motorcycle(int price,string name): Vehicule(price), m_type(name){}
Motorcycle::Motorcycle(): Vehicule::Vehicule(){}
Motorcycle::~Motorcycle(){}

void Motorcycle::showType() const{
     cout << "this is a motorcycle type: " << m_type << endl;
}
 int Motorcycle::tiresNumber() const{
     //cout<<"moto tires" << endl;
    return 2;
}

//------------------Truck functions------------------------------------
Truck::Truck(int price, int siz, string cargo): Vehicule(price),m_sze(siz),m_cargo(cargo){}
Truck::~Truck(){}

void Truck::showType() const{
    switch(m_sze){
        case 1:
              cout << "this is a truck of type : ultra light" << endl;
              break;
        case 2:
              cout << "this is a truck of type : very light" << endl;
              break;
        case 3:
              cout << "this is a truck of type : light" << endl;
              break;
        case 4:
              cout << "this is a truck of type : medium " << endl;
              break;
        default :
              cout << "this is a truck of type : heavy " << endl;
    }
    cout << "current cargo :" << m_cargo << endl;
}
void Truck::deployCargo(){

    cout << "deploying cargo ..." << endl << "....." << endl << "..cargo deployed!" << endl;
}

void Truck::transport(int a, int b){
    cout << "transporting cargo from the point " << a << " to the point " << b << endl;
}
int Truck::tiresNumber() const{
   // cout<<"truck tires" << endl;
    return 18;
}










