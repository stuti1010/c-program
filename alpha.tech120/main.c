#include <stdio.h>
#include <stdlib.h>

///finding the number of lines in file using file handling//

int main()
{
    char mychar;
    int totalines=1;
    FILE *fp;
    fp=fopen("exercisefile.txt","r");
    if(fp!=NULL)
    {
        while((mychar=fgetc(fp))!=EOF)
        {
            if(mychar == '\n')
            totalines++;
        }
        fprintf("total no of lines in this file = %d\n",totalines);
        fclose(fp);
    }
    return 0;
}
