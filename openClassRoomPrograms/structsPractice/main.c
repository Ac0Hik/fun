#include <stdio.h>
#include <stdlib.h>
#include"structs.h"

int main()
{
    int i;
    Person player[2];
   for(i=0;i<2;i++){
        printf("enter your first name\n");
        scanf("%s",&player[i].firstName);
        printf("\nenter your last name\n ");
        scanf("%s",&player[i].lastName);
        printf("enter your age\t");
        scanf("%d",&player[i].age);
        printf("\n");
   }
    for(i=0;i<2;i++){
        printf("player first name is = %s\n",player[i].firstName);
        printf("player  last name is = %s \n",player[i].lastName);
        printf("player  age  = %d",player[i].age);
        printf("\n");
        printf("\n");
   }
    return 0;
}
