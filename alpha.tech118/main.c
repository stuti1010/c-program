#include <stdio.h>
#include <stdlib.h>

///using fputs function for file handling////

int main()
{
    FILE *fp;
    puts("hey man");
    puts("How are you?");
    fp=fopen("myfirstfile4.txt","w");
    if(fp!=NULL)
    {
       fputs("hey man\n",fp);
       fputs("How are you?\n",fp);
       fclose(fp);
    }
    return 0;
}
