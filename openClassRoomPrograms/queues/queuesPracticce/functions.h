#include<stdio.h>
#include<stdlib.h>


typedef struct Element Element;
struct Element{
  int number;
  Element *next;
};

typedef struct Queue Queue;
struct Queue{
   Element *first;
};


//------------------------------------------
//------------------------------------------
Queue *initializeQueue();
void Enqueue (Queue *queue,int newNumber);
int Dequeue (Queue *queue);
void showQueue (Queue *queue);
