#include <stdio.h>
#include <stdlib.h>
#include"functions.h"

int main()
{
    Queue *queue  = initializeQueue();
    Enqueue(queue,5);
    Enqueue(queue,4);
    Enqueue(queue,3);
    Enqueue(queue,2);
    Enqueue(queue,1);
    showQueue(queue);
    printf("i dequeue %d\n",Dequeue(queue));
    printf("i dequeue %d\n",Dequeue(queue));
    printf("i dequeue %d\n",Dequeue(queue));
    showQueue(queue);
    int operation,x;
    printf("Enqueue or Dequeue ? 0 for enqueue and 1  for dequeue");
    scanf("%d",&operation);
    if(operation)
        printf("i dequeue %d\n");
    else{
        printf("enter number u wanna enqueue:  ");
        scanf("%d",&x);
        Enqueue(queue,x);
    }
    showQueue(queue);
    return 0;
}
