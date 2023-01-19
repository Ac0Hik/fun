#include<stdio.h>
#include"stackFunctions.h"

Stack *initializeStack()
{
   Stack *stack =(Stack*)malloc(sizeof(*stack));
    if(stack == NULL )
        exit(0);
    stack->head = NULL;
    return stack;

}

void push(Stack *stack,int numberToAdd)
{
    Element *newElement = malloc(sizeof(*newElement));
    if(stack == NULL || newElement == NULL)
        exit(0);
    newElement->number = numberToAdd;
    newElement->next = stack->head;
    stack->head = newElement;
}


int pop(Stack *stack)
{
    if (stack == NULL)
        exit(0);
    int stackNumber = 0;
    Element *elementPopped = stack->head;

    if(stack->head != NULL){
        stackNumber = elementPopped->number;
        stack->head = elementPopped->next;
        free(elementPopped);

    }return stackNumber;
}

void showStack(Stack *stack)
{

    if(stack == NULL)
        exit(0);
    Element *currentElement = stack->head;
    while(currentElement != NULL ){
        printf("%d\n",currentElement->number);
        currentElement=currentElement->next;
    }
    printf("\n");

}
