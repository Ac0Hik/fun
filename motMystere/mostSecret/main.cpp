#include <iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;
string melange(string );

int main()
{

    srand(time(0));
    string word,mot_melange;
    // le saisi du mot secret
    cout << "veuillez saisir le mot mystere que vous voulez:\t" << endl;
    cin >> word;

    //------------------------------
    //le melange de mot mystere
    mot_melange = melange(word);
    //-------------------------------
    //boucler----------------
    string second_player_word;
     do {
            cout << endl << "Quel est ce mot ?  || " << mot_melange << endl;
            cin >> second_player_word;
            if(second_player_word == word){
                    cout << "Bravo ;)" << endl;
            }else{
                cout << "ce n'est pas le mot :(" << endl;
            }
     }while( word != second_player_word );

    //------------------------------
    return 0;
}

string melange(string  mot_original){
    string mot_melange;
    unsigned long int length = mot_original.size();
    int random_number(0);
    while(length != mot_melange.size()  ){
        random_number =  rand() % mot_original.size();
        mot_melange += mot_original[random_number];
        mot_original.erase(mot_original.begin()+ random_number);
    }
    return mot_melange;
}













