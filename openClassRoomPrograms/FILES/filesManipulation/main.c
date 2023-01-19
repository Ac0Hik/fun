#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    FILE* file = NULL;

    file = fopen("test.txt", "r");
    if(file == NULL)
        printf("file doesn't exit");
    else{
        int score[3]={0};
        char newName[50];
        fscanf(file,"%d%d%d",&score[0],&score[1],&score[2]);
        printf("top scores are  \n3rd. %d\n2nd. %d\n1st. %d",score[0],score[1],score[2]);
        printf("enter the new file name : \n");
        gets(newName);

        fclose(file);
        rename("test.txt",newName);
    }
    return 0;
}

