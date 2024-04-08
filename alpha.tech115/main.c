#include<stdio.h>
#include<stdlib.h>

///using fgetc() function//

int main()
{
    FILE *fp;
    char mychar1;
    fp=fopen("myfirstfile.txt","r");
    if(fp!=NULL)
    {
        printf("the file is open to read\n");
        mychar1=fgetc(fp);
        printf("the first character in file is %c\n",mychar1);
        mychar1=fgetc(fp);
        printf("the second character in file is %c\n",mychar1);
        fgetc(stdin);
    }
}
