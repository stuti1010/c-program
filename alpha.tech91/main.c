#include <stdio.h>
#include <stdlib.h>

//finding the sequence of a character using recursions*//

int totalChar(char character)
{
    char inputuser;
    printf("enter the character(#):");
    scanf("%c",&inputuser);
    getchar();

    if(inputuser=='$')
        return 0;
    if(inputuser==character)
        return 1+ totalChar(character);
    return totalChar(character);

}
int main()
{
    int result;
    int character;
    result=totalChar(character);
    printf("the result is %d",result);

    return 0;
}
