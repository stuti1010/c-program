#include<stdio.h>
#include<stdlib.h>

///using fputc function ///

int main()
{
    FILE *fp;
    fp=fopen("myfirstfile2.txt","w");
    if(fp!=NULL)
    {
        fputc('H',fp);
        fputc('E',fp);
        fputc('Y',fp);
        fclose(fp);
    }
    putchar('a');
    return 0;
}
