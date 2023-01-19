#include <stdio.h>
#include <stdlib.h>
#include"stackFunctions.h"

int main()
{
    Stack *myStack = initializeStack();
    push(myStack,30);
    push(myStack,25);
    push(myStack,20);
    push(myStack,15);
    push(myStack,10);
    push(myStack,5);

    showStack(myStack);
    printf("i pop %d\n",pop(myStack));
    printf("i pop %d\n",pop(myStack));
    printf("i pop %d\n",pop(myStack));
    showStack(myStack);
    return 0;
}
