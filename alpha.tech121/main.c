#include<stdio.h>
#include<stdlib.h>

///printing numbers and their power to file//

int main()
{
    int i;
    FILE *fp;
    fp=fopen("powerfile.txt","w");
    if(fp!=NULL)
    {
        for(i=1;i<=10;i++)
        fprintf(fp,"%d %d\n",i,i*i);
        fclose(fp);
    }
    return 0;
}
