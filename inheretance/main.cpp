#include <iostream>
#include"warrior.h"
#include"magicien.h"

using namespace std;

int main()
{
   Person normal("viky");
   warrior soldier("thor");
   Magicien wizard("alex");
   normal.introduce();
   cout << "--------------------------" << endl;
   wizard.introduce();
   cout << "--------------------------" << endl;
   soldier.introduce();



    return 0;
}
