#include <iostream>
#include<string>
using namespace std;
void prog(double , double );

int main()
{
    /*int number(4);
    cout << "hello there *.* " << endl <<"enter a number"<<endl;
    cin >> number;
    cout << " the number you have entered is " << number << endl;*/

   double firstNumber(0),secondNumber(0);
cout << " enter the first and second number to add  " << endl;
   cin >> firstNumber ;
   cin >> secondNumber;
   prog(firstNumber,secondNumber);




    return 0;
}
void prog(double a, double b){

   cout << "(" << a << " + " << b << ")*2"<< " = " << (a + b)*2 ;

}
