#include"warrior.h"
#include<iostream>
#include<string>

using namespace std;

warrior::warrior():Person(){}
warrior::warrior(string name) : Person(name){}

void warrior::warriorSecretPunch(warrior &target) const {
    cout << "warrior punch" << endl;
    target.recevoireDegat(30);
}

void warrior::introduce() const{

    cout << "hello i am the warrior " << m_name << endl << "i have " << m_life << " health points" << endl;

}
