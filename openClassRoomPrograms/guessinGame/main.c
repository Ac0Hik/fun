#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
    const int MIN=1;
    srand(time(NULL));
    int mesteryNumber,MAX;
    int chosedNumber,cpt=0, continueGame=0,diffiultyLvl;
    printf("                        *************** hello there ************\n");
    printf("                           it's the guessing game  :)                  \n");
    //time to pick difficulty lvl
    printf("enter 1 to guess between 1 and 100\n");
    printf("enter 2 to guess between 1 and 1000\n");
    printf("enter 3 to guess between 1 and 10000\n");
    scanf("%d",&diffiultyLvl);
    switch (diffiultyLvl){
         case 1:
               MAX =100;
               mesteryNumber = (rand()%(MAX-MIN+1)) + MIN;
               break;
         case 2:
               MAX =1000;
               mesteryNumber = (rand()%(MAX-MIN+1)) + MIN;
               break;
         case 3:
               MAX =10000;
               mesteryNumber = (rand()%(MAX-MIN+1)) + MIN;
               break;
         default:
              MAX = 100;
              mesteryNumber = (rand()%(MAX-MIN+1)) + MIN;

}
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n     ******************* starting the game *******************\n");
    printf("\n");
    printf("\n");
    do
    {
      printf("enter a number between 1 and %d\n",MAX);
      scanf("%d",&chosedNumber);
     while(chosedNumber != mesteryNumber)
        {
           if(chosedNumber < mesteryNumber){
               printf("it's less\n");
               scanf("%d",&chosedNumber);
           }else if(chosedNumber > mesteryNumber){
               printf("it's more\n");
               scanf("%d",&chosedNumber);
           }cpt++;
        }
     if(chosedNumber == mesteryNumber)
         printf("good job u got it after %d rounds",cpt);
     printf("\nnew game ?? (1 for yes and 0 for no )");
     scanf("%d",&continueGame);
     mesteryNumber = (rand()%(MAX-MIN+1)) + MIN;
   }while(continueGame == 1);

    return 0;
}
