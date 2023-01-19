#include<stdio.h>
#include"linkedlists.h"

//element of a linked list


// initialiaz function

Liste *initialization()
{
    Liste *list = malloc(sizeof(*list));
    Element *element = malloc(sizeof(*element));

    if(list == NULL || element == NULL)
        exit(0);


    element->number = 0;
    element->next = NULL;
    list->head = element;
    return list;
}
void addElementToHead(Liste *liste ,int newNumber)
{
    Element *newElement = malloc(sizeof(*newElement));

    if(liste == NULL || newElement == NULL)
        exit(0);

    newElement->number = newNumber;

    newElement->next = liste->head;
    liste->head = newElement;

}

void deleteElementFromHead(Liste *liste)
{
    if(liste ==  NULL)
        exit(0);

    if(liste->head != NULL){

      Element *toDelet = liste->head;
      liste->head = liste->head->next;
      free(toDelet);
   }

}
void showList(Liste *liste)
{
    if(liste == NULL)
        exit(0);
    Element *currentElement = liste->head;
    while(currentElement != NULL)
        {
            printf("%d ->",currentElement->number);
            currentElement = currentElement->next;
        }
        printf("NULL\n");
}

void addElementInMiddle( Liste *Liste,int newNumber,int numberToAddNextTo)
{
    Element *newElemnt = (Element*) malloc(sizeof(*newElemnt));
    Element *index = Liste->head;
    //int i=0;

    //Element *currentElemnt = element;

    if(newElemnt == NULL || Liste == NULL)
        exit(0);
    while(index->number != numberToAddNextTo)
          index=index->next;


    newElemnt->next = index->next;
    index->next = newElemnt;
    newElemnt->number = newNumber;

}
void deleteElementFromMiddle(Liste *Liste,int numberToDelete)
{
    Element *element = (Element*) malloc(sizeof(element));
    if( element == NULL || Liste == NULL)
        exit(0);
     while(element->number != numberToDelete)
        element=element->next;



}

