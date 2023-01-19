#include <stdio.h>
#include <stdlib.h>
#include<string.h>



void showArray(int tab[],int dim)
{
    for(int i=0;i<dim;i++)
        printf("%d\t",tab[i]);
}

int main()
{
    char fileName[15],bufer[200];
    int tab[15];
    printf("enter ur file name\n");
    gets(fileName);
    FILE *FA = fopen(fileName,"w");
    int i ;
    if(FA == NULL)
        exit(1);
    else {
            for(i=0;i<15;i++)
                fprintf(FA,"%d\n",i);
            fclose(FA);
    }
    i=0;
    FA = fopen(fileName,"r");
    if(FA == NULL)
        exit(1);
    else{
         fgets(bufer,200,FA);
         while(!feof(FA)){
             sscanf(bufer,"%d",&tab[i]);
             i++;
             fgets(bufer,200,FA);
        }
        fclose(FA);
    }
    showArray(tab,i);
    return 0;
}

