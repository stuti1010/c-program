#include<stdio.h>
#include<stdlib.h>

///a program to calculate character appearances in file///

int main()
{
    char desiredcharacter;
    char  filename[20]={0};
    int countapperances=0;
    FILE *fp;

    printf("enter a desired character:");
    scanf("%c",&desiredcharacter);
    printf("enter the file name you want to test:");
    scanf("%s",filename);

    fp=fopen(filename,"r");
    if(fp!= NULL)
    {
        while(!feof(fp))
            if(fgetc(fp)==desiredcharacter)
            countapperances++;
    }
    printf("total apearances of character %c =%d\n",desiredcharacter,countapperances);
    return 0;
}
