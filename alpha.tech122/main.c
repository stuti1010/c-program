#include<stdio.h>
#include<stdlib.h>

///reading numbers and their power to file//

int main()
{
    int num1,num2;
    int i;
    FILE *fp;
    fp=fopen("powerfile.txt","r");
    if(fp!=NULL)
    {
        for(i=1;i<=10;i++)
        {
            fscanf(fp,"%d%d",&num1,&num2);
            fprintf("read =%d %d\n",num1,num2);;
        }
        fclose(fp);
    }
    return 0;
}
