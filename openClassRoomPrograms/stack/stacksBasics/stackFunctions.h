#include<stdio.h>

typedef struct Element Element;
struct Element{
 int number;
 Element *next;
 };



typedef struct Stack Stack;
struct Stack {
    Element *head;
   };


Stack *initializeStack();
void push(Stack *stack,int numberToAdd);
int pop(Stack *stack);
void showStack(Stack *stack);
