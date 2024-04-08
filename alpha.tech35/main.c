#include <stdio.h>
#include <stdlib.h>

int main()
{
     char mycharacter ;
    printf("enter the character :");
    scanf("%c",&mycharacter);
     if(mycharacter >= 'A' && mycharacter <= 'Z')
        printf("it's a uppercase!\n");
     else if (mycharacter >= 'a' && mycharacter <= 'z')
        printf(" it's a lowercase!\n");
     else if(mycharacter >= '0' && mycharacter <= '9')
        printf("it's a digit!\n");
     else
        printf("other...!\n");

    return 0;
}
