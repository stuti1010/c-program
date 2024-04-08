#include <stdio.h>
#include <stdlib.h>

///using fprintf and fscanf///

int main()
{
    int num;
    FILE *fp;
    fp=fopen("myfirstfile3.txt","r");
    if(fp!=NULL)
    {
        fprintf(stdout,"%d",num);
        fscanf(stdin,"%d",&num);
        fprintf("num from file =%d\n",num);
        fclose(fp);
    }
    return 0;
}
