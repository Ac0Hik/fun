#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#define initial_tries 10

char readCharacter() ;
void starInitializer(char a[],int dim);



int main()
{
    char secretWord[]="ELEMENT";
    char userWord[strlen(secretWord)];
    char myLetter;
    int i,j=0,k = initial_tries;
    int starsnumber=strlen(secretWord),starsCounter=0;


    starInitializer(userWord,strlen(secretWord));
    printf("welcome to the hang man game :) \n\n\n\n");
    printf("you have %d tries left \n",k);
    printf("this game's word is ?  \n");
    for (i=0;i<strlen(secretWord);i++){
        printf("*");

    }
    while (k != 0){
     // printf("\n");
      printf("\nu have %d tries left",k);
      printf("\nplease enter a character \t");

      myLetter = readCharacter();

      for(i=0 ; i < strlen(secretWord) ; i++){
          if(myLetter == secretWord[i]){
              userWord[j] = myLetter;
              j++;
         }else{
              j++;
              starsCounter++;
        }
      }
      k--;
      j=0;
      printf("%s\n",userWord);
      if(starsnumber > starsCounter)
        k++;
      starsnumber = starsCounter;
      starsCounter = 0 ;
      if( strchr(userWord,'*') == NULL){
          printf("\nCONGRATUATIONS you found the secret word %s ;) ",userWord);
          break;
        }

    }
    if(k == 0)
        printf("you LOST :( better LUCK next time");


    return 0;
}
char readCharacter()
{
    char caractere = 0;

    caractere = getchar(); // On lit le premier caractère
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà

    // On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer)
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caractère qu'on a lu
}
void starInitializer(char a[],int dim){

  int i;
  for(i=0;i<dim;i++)
    a[i]='*';
}
