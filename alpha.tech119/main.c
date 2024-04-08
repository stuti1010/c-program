#include <stdio.h>
#include <stdlib.h>

///finding the number of character in file using file handling//

int main()
{
    char mychar;
    int numberofcharacter=0;
    FILE *fp;
    fp=fopen("exercisefile.txt","r");
    if(fp!=NULL)
    {
        while((mychar=fgetc(fp))!=EOF)
        {
            printf("%c",mychar);
            numberofcharacter++;
        }
        printf("\ntotal no of character in the string is %d\n",numberofcharacter);
        fclose(fp);
    }
    return 0;
}
