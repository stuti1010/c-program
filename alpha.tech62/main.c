#include <stdio.h>
#include <stdlib.h>

//finding the uppercase and lowercase function*//

char tolower(char letter)
{
    if(letter>= 'A' && letter<='Z')
        return letter -'A' + 'a';
    else
        return -1;
}

 char toupper(char letter)
 {
     if(letter>='a' && letter<='z')
        return letter - 'a' +'A';

        else
        return -1;
 }
int main()
{
    char mychar;
    int result1,result2;
    printf("enter the character:");
    scanf("%c",&mychar);
    result1=tolower(mychar);
    result2=toupper(mychar);
    printf("the result=%d\n",result1);
    printf("the result is %d\n",result2);
    return 0;
}

