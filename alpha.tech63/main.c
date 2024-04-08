#include <stdio.h>
#include <stdlib.h>


int CharacterToInteger(char c1,char c2,char c3)
{
    int hundreds, tens, units;
    int finalresult;
    if (c1>= '0' && c1<= '9')
        hundreds = c1 - '0';
     else
        return 0;

        if(c2>= '0' && c2<= '9')
            tens = c2 - '0';
        else
            return 0;

        if(c3>= '0' && c3<= '9')
            units = c3 - '0';
        else
            return 0;
        return hundreds*100+tens*10+units;

}

int main()
{
    char c1,c2,c3;
    int result;
    printf("enter the first character:");
    scanf("%c",&c1);
    printf("enter the second character:");
    scanf("%c",&c2);
    printf("enter the third character:");
    scanf("%c",&c3);
    result=CharacterToInteger(c1,c2,c3);
    printf("the result=%d\n",result);
     return 0;
}
