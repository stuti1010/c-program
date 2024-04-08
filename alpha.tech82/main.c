#include <stdio.h>
#include <stdlib.h>
#define size 10

//find length of string*//

int strlen(char *str)
{
    int i=0;
   int length=0;
   while (str[i] != '\0')
   {
       i++;
       length++;
   }
   return length;
}
int main()
{
    int stringlength;
    char teststr[size];
    gets(teststr);
    stringlength = strlen(teststr);
    printf("the length of string '%s' is %d\n",teststr,stringlength);

    return 0;
}
