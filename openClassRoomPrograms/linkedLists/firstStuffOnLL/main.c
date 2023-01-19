#include <stdio.h>
#include <stdlib.h>
#include "linkedlists.h"

int main()

{
    Liste *myListe ;
    myListe = initialization() ;

    addElementToHead(myListe,5);
    addElementToHead(myListe,8);
    addElementToHead(myListe,12);
    addElementToHead(myListe,6);
    showList(myListe);
    addElementInMiddle(myListe,10,12);
    showList(myListe);

    return 0;
}
