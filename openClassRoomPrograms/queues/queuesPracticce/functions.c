#include<stdio.h>
#include<stdlib.h>
#include"functions.h"

Queue *initializeQueue()
{
    Queue *queue = (Queue*)malloc(sizeof(*queue));
    queue->first= NULL;
    if (queue == NULL )
            exit(0);
    return queue;
}


void Enqueue (Queue *queue,int newNumber)
{
    Element *newElement = malloc(sizeof(*newElement));
    if(queue == NULL || newElement == NULL)
        exit(0);
    newElement->number = newNumber;
    newElement->next = NULL;
    Element *currentElement = queue->first;
    if(currentElement == NULL){ // in case the queue is empty
        queue->first = newElement;
    }else{
        while (currentElement->next != NULL)
           currentElement = currentElement->next;
        currentElement->next = newElement;
    }

}
int Dequeue (Queue *queue)
{
    if(queue == NULL)
        exit(0);
    Element *firstElement = queue->first;
    int returnedNumber = 0;
    if(firstElement != NULL){
        returnedNumber = firstElement->number;
        queue->first = firstElement->next;
        free(firstElement);

    }
    return returnedNumber;
}
void showQueue (Queue *queue)
{
    if(queue == NULL){
        printf("the queue is NULL");
        exit(1);
    }
    Element *currentElement = queue->first;
    while (currentElement != NULL){
        printf("%d -> ",currentElement->number);
        currentElement = currentElement->next;
    }
        printf("NULL\n");
}
