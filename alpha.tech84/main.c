#include <stdio.h>
#include <stdlib.h>


//finding the length in the string*//

char *strcmp(char *str1,char *str2)
{
    int i=0,flag =0;

    while(flag ==0)
    {
       if (str1[i]<str2[i])
            flag =-1;
        else if (str1[i]>str2[i])
        flag=1;
        if( str1[i] =='\0')
            break;
        i++;

    }
    return flag;
}
int main()
{
    char str1[]="AlphaTech";
    char str2[]="BalphaTech";
    char *tempPtr;
    tempPtr= *strcmp("AlphaTech","BalphaTech");
    printf("the result is %s \n",*tempPtr);
    return 0;
}
